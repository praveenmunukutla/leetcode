class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxval = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                for(int k = j+1; k < nums.size(); k++){

                    if(nums[i] < nums[j]) break;

                    long long diff = nums[i] - nums[j];
                    if(diff < 0) diff = 0;
                    long long val = diff * nums[k];
                    maxval = max(val, maxval);
                }
            }
        }
        return maxval;
    }
};