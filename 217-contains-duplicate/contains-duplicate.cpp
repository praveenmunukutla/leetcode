class Solution {
    unordered_map<int, int> map;
public:
    bool containsDuplicate(vector<int>& nums) {
        for(auto n : nums){
            map[n]++;
            if(map[n] == 2) return true;
        }
        return false;
    }
};