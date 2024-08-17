class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> umails;
        for(auto e : emails){
            auto splitEmail = tokens(e, '@');
            auto part = splitEmail[0];
            auto domain = splitEmail[1];

            // auto emailBeforePlus = tokens(part, '+');
            // auto emailBeforePlusWithDots = tokens(emailBeforePlus[0],'.');
            // string ans;
            // for(auto s : emailBeforePlusWithDots)
            //     ans += s;

            auto email = cleanEmail(part);            
            umails.insert(email+"@"+domain);
        }
        return umails.size();
    }

    string cleanEmail(string s){
        string ans = "";
        for(auto c : s){
            if(c == '+') break;
            if(c == '.') continue;
            ans += c;
        }
        return ans;
    }

    vector<string> tokens(string s, char seperator){
        stringstream ss(s);
        string token;
        vector<string> ans;
        while(getline(ss, token, seperator)){
            if(!token.empty())
                ans.push_back(token);
        }
        return ans;
    }
};