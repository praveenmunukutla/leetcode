class Solution {
public:
    string sortSentence(string s) {
       auto tokens = [&] (string s){
            stringstream ss(s);
            vector<string> res;
            string token;
            while(getline(ss,token,' ')){
                if(!token.empty())
                    res.push_back(token);
            }
            return res;
       };
       auto v = tokens(s);
       sort(v.begin(), v.end(), [&](auto& a, auto& b){
          int v1 = a[a.length()-1]-'0';
          int v2 = b[b.length()-1]-'0';
          return v1 < v2;
       });

       string ans = "";
       for(auto vw : v){
            vw.pop_back();
            ans += vw + " ";
       }

       ans.pop_back();
       return ans;
    }
};