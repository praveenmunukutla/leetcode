class Solution {
    unordered_map<char, string> cwmap;
    unordered_map<string, char> wcmap;
public:
    std::vector<std::string> split(const std::string &s, char delimiter) {
        std::vector<std::string> tokens;
        std::string token;
        std::stringstream ss(s);

        // Use getline to split the string based on the delimiter
        while (std::getline(ss, token, delimiter)) {
            tokens.push_back(token);
        }

        return tokens;
    }

    bool wordPattern(string pattern, string s) {
        auto strs = split(s, ' ');

        if (pattern.length() != strs.size()) return false;

        for (int i = 0; i < pattern.length(); ++i) {
            char ch = pattern[i];
            const string &word = strs[i];

            auto citr = cwmap.find(ch);
            auto witr = wcmap.find(word);

            if (citr == cwmap.end() && witr == wcmap.end()) {
                cwmap[ch] = word;
                wcmap[word] = ch;
            } else if (citr == cwmap.end() || witr == wcmap.end() || citr->second != word || witr->second != ch) {
                return false;
            }
        }

        return true;
    }
};
