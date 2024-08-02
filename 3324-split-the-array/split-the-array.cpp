class Solution {
    unordered_map<int,int> umap;
public:
    bool isPossibleToSplit(vector<int>& nums) {
        for(auto n : nums) {
            umap[n]++;
            if(umap[n] > 2) return false;
        }
        return true;
    }
};