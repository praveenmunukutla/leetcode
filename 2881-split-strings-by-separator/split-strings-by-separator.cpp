class Solution {
    vector<string> tokens;
public:
    void getTokens(string s, char separator){
        stringstream ss(s);
        string token;
        while(getline(ss, token, separator)){
            if(!token.empty())
                tokens.push_back(token);
        }
    }

    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        for(auto w : words)
            getTokens(w, separator);
        return tokens;
    }
};