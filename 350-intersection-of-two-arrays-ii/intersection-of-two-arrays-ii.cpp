class Solution {
    unordered_map<int,vector<int>> umap;
    vector<int> ans;
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        for(auto n : nums1) {
            if (umap.find(n) == umap.end()) {
                umap[n] = {0, 0};  // Initialize vector to store counts for nums1 and nums2
            }
            umap[n][0]++;
        }
        for(auto n : nums2) {
            if (umap.find(n) == umap.end()) {
                umap[n] = {0, 0};  // Initialize vector to store counts for nums1 and nums2
            }
            umap[n][1]++;
        }
        for(auto u : umap){
            auto m = min(u.second[0], u.second[1]);
            if(m != 0){
                while(m){
                    ans.push_back(u.first);
                    m--;
                }
            }
        }

        return ans;
    }
};