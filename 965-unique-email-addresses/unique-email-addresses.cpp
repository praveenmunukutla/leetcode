class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> umails;
        for(auto e : emails){
            auto s = tokens(e, '@');
            auto part = s[0];
            auto domain = s[1];
            auto parts = tokens(part, '+');
            auto splitFPart = tokens(parts[0],'.');
            string ans;
            for(auto s : splitFPart)
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