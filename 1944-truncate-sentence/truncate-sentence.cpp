class Solution {
public:
    // string truncateSentence(string s, int k) {
    //     auto tokens = [](string s){
    //         stringstream ss(s);
    //         string token;
    //         vector<string> tokens;
    //         while(getline(ss,token,' ')){
    //             if(!token.empty())
    //                 tokens.push_back(token);                    
    //         }
    //         return tokens;
    //     };
    //     string ans;
    //     for(auto t : tokens(s)){
    //         if(k == 0) break;
    //         ans += t + " ";
    //         k--;
    //     }
    //     ans.pop_back();
    //     return ans;
    // }
    string truncateSentence(string s, int k) {
        int len = s.length();
        int count = 0;
        int pos = 0;
        for(int i = 0; i < len; i++){
            if(isalnum(s[i]) && (s[i+1] == ' ' || s[i+1] == '\0')){
                count++;
                if(count == k){
                    pos = i+1;
                    break;
                }
            }
        }
        return s.substr(0, pos);
    }
};