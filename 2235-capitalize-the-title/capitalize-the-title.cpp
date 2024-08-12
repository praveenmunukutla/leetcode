class Solution {
public:
    vector<string> getTokens(string title){
        stringstream ss(title);
        vector<string> tokens;
        string token;
        while(getline(ss, token, ' ')){
            if(!token.empty()) tokens.push_back(token);
        }
        return tokens;
    }

    string capitalizeTitle(string title) {
        auto tokens = getTokens(title);
        string ans = "";
        for(int i = 0; i < tokens.size(); i++){
            auto t = tokens[i];
            std::transform(t.begin(), t.end(), t.begin(), [](unsigned char c) { return std::tolower(c); });
            if(t.size() > 2){
                t[0] = toupper(t[0]);
            }
            ans += t+" ";
        }
        
        ans.pop_back();
        return ans;
    }
};