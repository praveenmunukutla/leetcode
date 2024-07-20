class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int msum = INT_MIN;
        int sum = 0;
        for(auto n : nums){
            if(n == 1) 
                sum += n;
            else {
                msum = max(msum, sum);
                sum = 0;
            }
        }

        msum = max(msum, sum);
        return msum;
    }
};