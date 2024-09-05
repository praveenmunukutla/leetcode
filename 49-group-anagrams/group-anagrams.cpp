class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> umap;
        for(auto s : strs){
            auto t = s;
            sort(s.begin(), s.end());
            umap[s].push_back(t);
        }

        vector<vector<string>> res;
        for(auto u : umap){
            res.emplace_back(u.second);
        }
        return res;
    }
};