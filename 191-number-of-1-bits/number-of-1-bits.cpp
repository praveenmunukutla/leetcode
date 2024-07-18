class Solution {
public:
     int speed = []() {
        ios::sync_with_stdio(false); // Disable synchronization with C I/O 
        cin.tie(NULL); // Untie cin from cout 
        cout.tie(NULL); // Untie cout (though this is not necessary) 
        return 0; 
    }(); 

    int hammingWeight(int n) {
        int ans = 0;
        while(n){
            if(n&1)ans++;
            n = n >> 1;
        }
        return ans;
    }
};