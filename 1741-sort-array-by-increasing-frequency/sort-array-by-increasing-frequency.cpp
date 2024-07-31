class Solution {
    unordered_map<int, int> umap;
public:
    vector<int> frequencySort(vector<int>& nums) {
        for(auto n : nums) umap[n]++;
        sort(nums.begin(), nums.end(), [&](auto& a, auto& b){
            if(umap[a] == umap[b]){
                return a > b;
            }
            return umap[a] < umap[b];
        });
        return nums;
    }
};