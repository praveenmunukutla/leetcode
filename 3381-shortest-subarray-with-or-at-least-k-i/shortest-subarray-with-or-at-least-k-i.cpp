class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int size = nums.size();
        int minans = INT_MAX;
        for(int i = 0; i < size; i++){
            int sor = nums[i];
            if(sor >= k){
                minans = min(minans, 1);
            }
            for(int j = i+1; j < size; j++){
                sor = sor | nums[j];
                if(sor >= k){
                    minans = min(minans, j-i+1);
                }

                if(j-i+1 > minans) break;
            }
        }
        return minans == INT_MAX ? -1 : minans;
    }
};