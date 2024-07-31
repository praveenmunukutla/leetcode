class Solution {
    unordered_map<int, vector<int>> umap;
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int index = 0;
        for(auto n : nums){
            for(auto n1 : n){
                umap[n1].push_back(index);
            }
            index++;
        }

        vector<int> ans;
        for(auto u : umap){
            if(u.second.size() == nums.size()){
                ans.push_back(u.first);
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};