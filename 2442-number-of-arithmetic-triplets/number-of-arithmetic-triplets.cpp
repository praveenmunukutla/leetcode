class Solution {
    unordered_map<int, int> umap;
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        for(int i = 0; i < nums.size(); i++){
            umap[nums[i]] = i;
        }
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            int n = nums[i];
            if(umap[n+diff] > i && umap[n+diff+diff] > i && umap[n+diff+diff] > umap[n+diff])
                count++;
        }
        return count;
    }
};