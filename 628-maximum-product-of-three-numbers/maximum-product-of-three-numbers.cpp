class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int l = nums.size();
        sort(nums.begin(), nums.end());
        int ans = max(nums[l-1]*nums[l-2]*nums[l-3], nums[0]*nums[1]*nums[l-1]);
        return ans;
    }
};