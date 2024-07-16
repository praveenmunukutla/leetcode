class Solution {
    unordered_map<int,int> map;
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int index = 0;
        for(auto n : nums){
            if(map.find(target-n) != map.end()){
                return {map[target-n], index};
            }
            map[n] = index;
            index++;
        }

        return {};
    }
};