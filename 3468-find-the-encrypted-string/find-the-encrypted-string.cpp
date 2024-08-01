class Solution {
public:
    string getEncryptedString(string s, int k) {
        string ans = "";
        int len = s.length();
        for(int i = 0; i < len; i++){
            int nc = (i + k) % len;
            ans += s[nc];
        }
        return ans;
    }
};