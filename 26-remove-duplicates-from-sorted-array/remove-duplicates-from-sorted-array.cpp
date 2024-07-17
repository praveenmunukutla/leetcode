class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int sIndex = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[sIndex]){
                nums[++sIndex] = nums[i];
            }
        }
        return sIndex+1;
    }
};