class Solution {
public:
    bool isCircularSentence(string s) {
        int len = s.length();
        for(int i = 0; i < len; i++){
            if(i == len-1){
                if(s[i] == s[0]) continue;
                else return false;
            }
            if(s[i] == ' '){
                if(i > 0 && i < len-1 && s[i-1] == s[i+1]) continue;
                else return false;
            }
        }

        return true;
    }
};