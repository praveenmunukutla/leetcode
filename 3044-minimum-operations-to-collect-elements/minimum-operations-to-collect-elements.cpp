class Solution {
    unordered_set<int> uset;
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        for(int i = nums.size()-1; i >= 0; i--){
            if(uset.size() == k) return count;
            if(nums[i] <= k) {
                uset.insert(nums[i]);
            }
            count++;
        }
        return count;
    }
};