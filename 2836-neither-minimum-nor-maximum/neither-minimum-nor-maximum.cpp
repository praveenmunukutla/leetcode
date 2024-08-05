class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        auto mine = min_element(nums.begin(), nums.end());
        auto maxe = max_element(nums.begin(), nums.end());
        for(auto n : nums) if(n!=*mine && n!=*maxe) return n;
        return -1;
    }
};