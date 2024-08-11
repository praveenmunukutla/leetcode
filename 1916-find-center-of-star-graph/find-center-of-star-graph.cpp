class Solution {
    unordered_map<int, vector<int>> umap;
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size()+1;
        for(auto e : edges){
            umap[e[0]].push_back(e[1]);
            umap[e[1]].push_back(e[0]);
        }

        for(auto u : umap){
            if(u.second.size() == n-1)
                return u.first;
        }

        return -1;        
    }
};
