class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        // Calculate the total sum of the array
        for(auto n : nums) sum += n;

        int lsum = 0;
        for(int i = 0; i < nums.size(); i++){
            // Check if the left sum equals the right sum
            if(lsum == sum - lsum - nums[i]) return i;
            lsum += nums[i];  // Update the left sum
        }
        
        return -1;  // Return -1 if no pivot index is found
    }
};
