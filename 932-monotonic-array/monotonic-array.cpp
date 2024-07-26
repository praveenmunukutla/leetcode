class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int monotonic = 0; // 1 - increasing, 2 - decreasing, 0 - not decided yet

        // Iterate through the vector to check for monotonicity
        for(int i = 1; i < nums.size(); i++) {
            if (monotonic == 0) { // If direction is not yet decided
                if (nums[i] == nums[i-1]) {
                    continue; // If current element is equal to previous, continue checking
                } else if (nums[i] > nums[i-1]) {
                    monotonic = 1; // Set direction to increasing
                } else {
                    monotonic = 2; // Set direction to decreasing
                }
            } else { // If direction is already decided
                if (monotonic == 1 && nums[i] < nums[i-1]) {
                    return false; // If supposed to be increasing and current element is smaller, return false
                } else if (monotonic == 2 && nums[i] > nums[i-1]) {
                    return false; // If supposed to be decreasing and current element is larger, return false
                }
            }
        }
        return true; // If no contradictions found, return true
    }
};
