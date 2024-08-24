class Solution {
public:
    string truncateSentence(string s, int k) {
        auto tokens = [](string s){
            stringstream ss(s);
            string token;
            vector<string> tokens;
            while(getline(ss,token,' ')){
                if(!token.empty())
                    tokens.push_back(token);                    
            }
            return tokens;
        };
        string ans;
        for(auto t : tokens(s)){
            if(k == 0) break;
            ans += t + " ";
            k--;
        }
        ans.pop_back();
        return ans;
    }
};