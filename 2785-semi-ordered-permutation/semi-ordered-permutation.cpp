class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int n = nums.size();
        int pos1 = -1, posN = -1;

        // Find positions of 1 and n
        for (int i = 0; i < n; ++i) {
            if (nums[i] == 1) {
                pos1 = i;
            }
            if (nums[i] == n) {
                posN = i;
            }
        }

        // If 1 is before n, the operations are simple
        if (pos1 < posN) {
            return pos1 + (n - 1 - posN);
        } else {
            // If 1 is after or at the same position as n, we need one less operation
            return pos1 + (n - 1 - posN) - 1;
        }
    }
};
