class Solution {
    unordered_map<int,int> umap;
public:
    int findLHS(vector<int>& nums) {
        for(auto n : nums) umap[n]++;
        int maxseq = 0;
        for(auto u : umap){
            if(umap.find(u.first+1) != umap.end()){
                maxseq = max(maxseq, u.second + umap[u.first+1]);
            }
        }
        return maxseq;
    }
};