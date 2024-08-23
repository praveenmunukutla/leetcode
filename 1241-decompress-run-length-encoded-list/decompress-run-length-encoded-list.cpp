class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(size_t i = 0; i < nums.size(); i+=2){
            auto v1 = nums[i];
            auto v2 = nums[i+1];
            while(v1--){
                ans.push_back(v2);
            }
        }
        return ans;
    }
};