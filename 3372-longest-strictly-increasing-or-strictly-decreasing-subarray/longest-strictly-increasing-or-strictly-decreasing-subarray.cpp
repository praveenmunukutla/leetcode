class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int lsubi = 0;
        int lsubd = 0;
        int size = nums.size();
        int icount = 1, dcount = 1;
        for(int i = 1; i < size; i++){
            if(nums[i] > nums[i-1]){
                icount++;
                lsubi = max(lsubi, icount);
            }else{
                icount = 1;
            }


            if(nums[i] < nums[i-1]){
                dcount++;
                lsubd = max(lsubd, dcount);
            }else{
                dcount = 1;
            }

        }

        if(lsubi == 0 && lsubd == 0) return 1;

        return max(lsubi, lsubd);
    }
};