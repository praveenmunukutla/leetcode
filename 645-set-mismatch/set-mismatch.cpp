class Solution {
public:
    std::vector<int> findErrorNums(std::vector<int>& nums) {
        std::vector<int> ans(2);  // Prepare the answer vector with two slots
        
        // First pass: find the duplicated number
        for(int i = 0; i < nums.size(); i++) {
            int index = std::abs(nums[i]) - 1;  // Find the index corresponding to the current value
            if(nums[index] < 0) {
                ans[0] = index + 1;  // If the value at index is negative, we found the duplicate
            } else {
                nums[index] = -nums[index];  // Mark the value at index as visited by making it negative
            }
        }

        // Second pass: find the missing number
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) {
                ans[1] = i + 1;  // If the value at index is positive, the corresponding number is missing
            }
        }
        
        return ans;
    }
};