class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int maxv = 0, cntz = 0, cnto = 0;
        for(int i = 0; i < s.length(); i++){
            if(i > 0 && s[i] == '0' && s[i-1] == '1'){
               cntz = 1;
               cnto = 0;
            }else{
                if(s[i] == '0') cntz++;
                else if(s[i] == '1') cnto++;
                maxv = max(maxv, min(cnto, cntz)*2);
            }
        }
        return maxv;
    }
};
