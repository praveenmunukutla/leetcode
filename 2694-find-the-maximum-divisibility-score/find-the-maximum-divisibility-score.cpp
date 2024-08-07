class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int maxc = INT_MIN, maxval = 0;
        for(int i = 0; i < divisors.size(); i++){
            int count = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[j] % divisors[i] == 0) count++;
            }

            if(count > maxc){
                maxc = count;
                maxval = divisors[i];
            }else if(count == maxc){
                if(divisors[i] < maxval)
                    maxval = divisors[i];
            }
        }
        return maxval;
    }
};