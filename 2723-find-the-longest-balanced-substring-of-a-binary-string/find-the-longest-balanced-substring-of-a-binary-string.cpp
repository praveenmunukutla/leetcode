class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int maxSubLen = 0;
        int len = s.length();
        for(int i = 0; i < s.length()-1; i++){
            if(s[i] == '0' && s[i+1] == '1'){
                int j = i, k = i+1;
                while(j >= 0 && k < len){
                    if(s[j] == '0' && s[k] == '1'){
                        maxSubLen = max(maxSubLen, k-j+1);
                        j--;
                        k++;
                    }else break;
                }
            }
        }
        return maxSubLen;
    }
};