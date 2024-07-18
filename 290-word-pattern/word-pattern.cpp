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
        auto strs = split(s,' ');
        
        if(pattern.length() != strs.size()) return false;

        for(int i = 0; pattern[i] != '\0'; i++){
            char ch = pattern[i];
            string word = strs[i];

            if(cwmap.find(ch)==cwmap.end() && wcmap.find(word) == wcmap.end()){
                cwmap[ch]=word;
                wcmap[word]=ch;
            }else if(cwmap.find(ch)==cwmap.end() && wcmap.find(word) != wcmap.end()){
                return false;
            }else if(cwmap.find(ch)!=cwmap.end() && wcmap.find(word) == wcmap.end()){
                return false;
            }else {
                if(!(cwmap[ch] == word && wcmap[word] == ch))
                    return false;
            }
        }

        return true;
    }
};