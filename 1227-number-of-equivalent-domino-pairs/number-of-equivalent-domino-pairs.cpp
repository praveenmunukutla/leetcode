class Solution {
    unordered_map<int, vector<vector<int>>> umap;
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        for(auto d : dominoes){
            int sum = d[0]+d[1];
            if(umap.find(sum) == umap.end()) 
                umap[sum] = std::vector<std::vector<int>>();
            umap[sum].push_back({d[0],d[1]});
        }
 
        int count = 0;
        for(auto u : umap){
            if(u.second.size() > 1){
                vector<vector<int>> dom = u.second;
                int len = u.second.size();
                for(int i = 0; i < len; i++){
                    for(int j = i+1; j < len; j++){
                        if(dom[i][0] == dom[j][0] && dom[i][1] == dom[j][1]) count++;
                        else if(dom[i][0] == dom[j][1] && dom[i][1] == dom[j][0]) count++;
                    }
                }
            }
        }

        return count;
    }
};