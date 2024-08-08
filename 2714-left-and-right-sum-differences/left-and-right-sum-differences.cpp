class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum = 0;
        for(auto n : nums) sum += n;
        
        vector<int> ans;
        int leftSum = 0;
        for(int i = 0; i < nums.size(); i++){
            int rightSum = sum - nums[i] - leftSum;
            ans.push_back(abs(leftSum - rightSum));
            leftSum += nums[i];
        }

        return ans;
    }
};