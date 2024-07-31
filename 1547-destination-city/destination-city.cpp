class Solution {
    unordered_map<string, string> umap;
    unordered_set<string> cities;
public:
    string destCity(vector<vector<string>>& paths) {
        for(auto p : paths){
            umap[p[0]] = p[1];
            cities.insert(p[0]);
            cities.insert(p[1]);
        }
        
        string ans;
        for(auto c : cities){
            if(umap.find(c) == umap.end())
                ans = c;
        }

        return ans;
    }
};