
class Solution {
public:
    unordered_map<string,int> getTokens(const string& s) {
        unordered_map<string,int> tokens;
        string token;
        stringstream ss(s);
        while (getline(ss, token, ' ')) {
            if (!token.empty())
                tokens[token]++;
        }
        return tokens;
    }

    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        auto tokens1 = getTokens(s1);
        auto tokens2 = getTokens(s2);

        for (const auto& token1 : tokens1) {
            if (tokens2.find(token1.first) == tokens2.end() && token1.second == 1) {
                ans.push_back(token1.first);
            }
        }
        for (const auto& token2 : tokens2) {
            if (tokens1.find(token2.first) == tokens1.end() && token2.second == 1) {
                ans.push_back(token2.first);
            }
        }
        return ans;
    }
};
