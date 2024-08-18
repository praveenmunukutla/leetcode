class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        vector<int> res(32, 0);

        for (int i = 0; i < 32; ++i) {
            int count = 0;
            for (int n : nums) {
                if (n & (1 << i)) { // Check if the ith bit is set
                    ++count;
                }
                if (count >= k) {
                    res[i] = 1; // Mark the ith bit as set
                    break; // No need to check further numbers for this bit position
                }
            }
        }

        int ans = 0;
        for (int i = 0; i < 32; ++i) {
            if (res[i]) {
                ans |= (1 << i); // Construct the final result
            }
        }

        return ans;
    }
};
