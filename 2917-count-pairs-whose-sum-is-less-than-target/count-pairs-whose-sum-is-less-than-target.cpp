class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        sort(nums.begin(), nums.end());
        int start = 0, end = nums.size()-1;
        while(start < end){
            if(nums[start]+nums[end] < target){
                count += end-start;
                start++;
            }else{
                end--;
            }
        }
        return count;
    }
};