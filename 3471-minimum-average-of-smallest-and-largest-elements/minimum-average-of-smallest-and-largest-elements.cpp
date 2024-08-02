class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        double minAvg = 0;
        for(int i = 0; i <= len/2; i++){
            double avg = (nums[i]+nums[len-i-1])/2.0;
            if(minAvg == 0 || avg < minAvg) minAvg = avg;
        }
        return minAvg;
    }
};