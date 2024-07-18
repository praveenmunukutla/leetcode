class Solution {
public:
     int speed = []() {
        ios::sync_with_stdio(false); // Disable synchronization with C I/O 
        cin.tie(NULL); // Untie cin from cout 
        cout.tie(NULL); // Untie cout (though this is not necessary) 
        return 0; 
    }(); 

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