class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int left = 0, right = nums.size()-1, index = nums.size()-1;
        while(left <= right){
            int lval = nums[left]*nums[left];
            int rval = nums[right]*nums[right];
            if(rval > lval){
                ans[index--] = rval;
                right--;
            }else {
                ans[index--] = lval;
                left++;
            }
        }
        return ans;
    }
};