class Solution {
public:
    vector<string> getTokens(string s){
        stringstream ss(s);string token;vector<string> tokens;
        while(getline(ss, token, ' ')){
            if(!token.empty()) tokens.push_back(token);
        }
        return tokens;
    }

    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans;
        auto tokens = getTokens(text);
        for(int i = 0; i < tokens.size(); i++){
            if(i < tokens.size() - 2 && tokens[i] == first && tokens[i+1] == second)
                ans.push_back(tokens[i+2]);
        }
        return ans;
    }
};