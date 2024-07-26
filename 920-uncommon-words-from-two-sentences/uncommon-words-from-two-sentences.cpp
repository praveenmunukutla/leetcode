class Solution {
public:
    unordered_map<string,int> getTokens(string s){
        unordered_map<string,int> tokens;
        string token;
        stringstream ss(s);
        while(getline(ss,token,' ')){
            if(!token.empty())
                tokens[token]++;
        }
        return tokens;
    }

    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        auto tokens1 = getTokens(s1);
        auto tokens2 = getTokens(s2);
        for(auto s1 : tokens1){
            if(tokens2.find(s1.first) == tokens2.end() && tokens1[s1.first] == 1) ans.push_back(s1.first);
        }
        for(auto s2 : tokens2){
            if(tokens1.find(s2.first) == tokens1.end() && tokens2[s2.first] == 1) ans.push_back(s2.first);
        }
        return ans;
    }
};