class Solution {
public:
    int titleToNumber(string columnTitle) {
         int ans = 0;
         for(int i = columnTitle.length()-1, j = 0; i >= 0; i--, j++){
             ans += pow(26,j)*(columnTitle[i]-'A'+1);
         }
         return ans;
    }

    inline int pow(int val, int x){
        if(x == 0) return 1;
        return val * pow(val, x-1);
    }
};