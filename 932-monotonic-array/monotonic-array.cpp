class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int monotonic = 0; //1-increasing; 2-decreasing; 0- didnt decide yet.
        for(int i = 1; i < nums.size(); i++){
            if(monotonic == 0) {
                if(nums[i]==nums[i-1]) continue;
                else if(nums[i] > nums[i-1]) monotonic = 1;
                else monotonic = 2;
            }
            else {
                if(monotonic == 1 && nums[i] < nums[i-1]) return false;
                else if(monotonic == 2 && nums[i] > nums[i-1]) return false;
            }
        }
        return true;
    }
};