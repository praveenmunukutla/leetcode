class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int len = nums.size();
        for(int i = 0; i < len-1; i++){
            if(nums[i] == nums[i+1]){
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }

        int sIndex = 0;
        for(int i = 0; i < len; i++){
            if(nums[i] !=0 )
                nums[sIndex++] = nums[i];
        }

        for(int i = sIndex; i < len; i++)
            nums[i] = 0;

        return nums;
    }
};