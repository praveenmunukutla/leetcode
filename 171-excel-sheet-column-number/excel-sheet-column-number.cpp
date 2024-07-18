class Solution {
public:
     int speed = []() {
        ios::sync_with_stdio(false); // Disable synchronization with C I/O 
        cin.tie(NULL); // Untie cin from cout 
        cout.tie(NULL); // Untie cout (though this is not necessary) 
        return 0; 
    }(); 

     int titleToNumber(string columnTitle) {
        int ans = 0;  // Use long long to avoid overflow
        
        for (char c : columnTitle) {
            ans = ans * 26 + (c - 'A' + 1);
        }

        return ans;  // Cast back to int if needed
    }
};