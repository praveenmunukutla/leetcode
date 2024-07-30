class Solution {
    unordered_map<int, unordered_set<int>> umap;
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        for(auto n : nums1) umap[n].insert(1);
        for(auto n : nums2) umap[n].insert(2);
        for(auto n : nums3) umap[n].insert(3);

        vector<int> ans;
        for(auto u : umap){
            if(u.second.size() >= 2)ans.push_back(u.first);
        }

        return ans;
    }
};