class Solution {
public:
    int findMaxConsecutiveOnes(std::vector<int>& nums) {
        int maxCount = 0; // Initialize to 0
        int currentCount = 0;
        
        for (int n : nums) {
            if (n == 1) {
                // Increment the count for consecutive ones
                currentCount++;
            } else {
                // Update the maximum count and reset current count
                maxCount = std::max(maxCount, currentCount);
                currentCount = 0;
            }
        }
        
        // Final check to update maxCount after the loop
        maxCount = std::max(maxCount, currentCount);
        
        return maxCount;
    }
};
