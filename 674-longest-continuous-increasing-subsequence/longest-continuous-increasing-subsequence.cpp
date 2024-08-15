class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int currentLen = 1, maxLen = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i]>nums[i-1]){
                currentLen++;
            }else{
                currentLen = 1;
            }
            maxLen = max(maxLen, currentLen);
        }
        return maxLen;
    }
};