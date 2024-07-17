class Solution {
public:
     int speed = []() { 
        ios::sync_with_stdio(false); // Disable synchronization with C I/O 
        cin.tie(NULL); // Untie cin from cout 
        cout.tie(NULL); // Untie cout (though this is not necessary) 
        return 0; 
    }(); 
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(auto n : nums)
            ans ^= n;
        return ans;
    }
};