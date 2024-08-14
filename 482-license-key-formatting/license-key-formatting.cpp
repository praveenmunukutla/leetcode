class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string ans = "";
        int len = s.length();
        for(int i = len-1, j = 0; i >= 0; i--){
            if(isalnum(s[i])){
                if(isdigit(s[i])){
                    ans.insert(ans.begin(), s[i]);
                    j++;
                }else{
                    ans.insert(ans.begin(), toupper(s[i]));
                    j++;
                }
            }
            if(j%k == 0 && ans[0] != '-' && ans.length() != 0){
                ans.insert(ans.begin(), '-');
            }
        }

        if(ans[0] == '-') return ans.substr(1,ans.length());

        return ans;
    }
};