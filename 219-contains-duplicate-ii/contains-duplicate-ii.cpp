class Solution {
    unordered_map<int, vector<int>> umap;
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i = 0; i < nums.size(); i++){
            umap[nums[i]].push_back(i);
        }

        for(auto u : umap){
            auto v = u.second;
            for(int i = 1; i < v.size(); i++){
                int diff = abs(v[i]-v[i-1]);
                if(diff <= k) return true;
            }
        }

        return false;
    }
};