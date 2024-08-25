class Solution {
public:
    int maxPower(string s) {
        int len = s.length();
        int maxAns = -1;
        for(int i = 0; i < len; i++){
            char ch = s[i];
            int j = i+1;
            int count = 1;
            while(j < len && s[j] == ch){
                j++;
                count++;
            }
            i = j-1;
            maxAns = max(maxAns, count);
        }
        return maxAns;
    }
};