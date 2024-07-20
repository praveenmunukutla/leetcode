class Solution {
public:
    int countSegments(string s) {
        
        vector<string> tokens;
        stringstream ss(s);
        string token;

        while(getline(ss, token, ' ')){
            if(!token.empty())
                tokens.emplace_back(token);
        }

        return tokens.size();
    }
};