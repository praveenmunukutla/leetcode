class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> umails;
        for(auto e : emails){
            auto splitEmail = tokens(e, '@');
            auto part = splitEmail[0];
            auto domain = splitEmail[1];
            auto emailBeforePlus = tokens(part, '+');
            auto emailBeforePlusWithDots = tokens(emailBeforePlus[0],'.');
            
            string ans;
            for(auto s : emailBeforePlusWithDots)
                ans += s;
            umails.insert(ans+"@"+domain);
        }
        return umails.size();
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