class Solution {
public:
    vector<string> getToken(string str){
        stringstream ss(str);
        string token; vector<string> tokens;
        while(getline(ss, token, '.')){
            if(!token.empty()) tokens.push_back(token);
        }
        return tokens;
    }

    string defangIPaddr(string address) {
        auto tokens = getToken(address);
        string ans = "";
        for(int i = 0; i < tokens.size(); i++){
            if(i == tokens.size()-1){
                ans += tokens[i];
                continue;
            }
            ans += tokens[i]+"[.]";
        }
        return ans;
    }
};