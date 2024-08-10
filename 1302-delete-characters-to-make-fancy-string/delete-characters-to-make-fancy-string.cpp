class Solution {
public:
    string makeFancyString(string s) {
        int len = s.length();
        string ans = "";
        for(int i = 0; i < len; ){
            char curr = s[i];
            int count = 1;
            int j = i+1;
            while(j < len){
                if(s[j] == s[i]) count++;
                else break;
                j++;
            }

            if(count >= 2) {ans += curr; ans += curr;}
            else ans += curr;
            i = j;
        }

        return ans;
    }
};