class Solution {
public:
    string replaceDigits(string s) {
        string ans = "";
        int len = s.length();

        int i ;
        for(i = 0; i < s.length()-1; i+=2){
            char ch1 = s[i];
            char ch2 = ch1+(s[i+1]-'0');
            ans += string(1,ch1) + string(1,ch2);
        }

        if(len%2 == 1){
            char ch = s[len-1];
            ans = ans+string(1,ch);
        }

        return ans;
    }
};