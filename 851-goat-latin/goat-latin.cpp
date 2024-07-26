class Solution {
    unordered_set<char> uset = {'a','e','i','o','u','A','E','I','O','U'};
public:
    vector<string> splitStrings(string s){
        stringstream ss(s);
        string token;
        vector<string> tokens;
        while(getline(ss, token, ' ')){
          if(!token.empty())
              tokens.push_back(token);
        }
        return tokens;
    }

    string toGoatLatin(string sentence) {
        vector<string> tokens = splitStrings(sentence);
        string ans = "";

        int i = 1;
        for(auto t : tokens){
            int d = i;
            if(uset.count(t[0])){
                t += "ma";
            }else{
                auto ch = t[0];
                t = t.substr(1);
                t +=  std::string(1, ch) + "ma";
            }
            while(d){
                t += "a";
                d--;
            }
            i++;
            ans += t + " ";
        }

        ans.pop_back();
        return ans;
    }
};