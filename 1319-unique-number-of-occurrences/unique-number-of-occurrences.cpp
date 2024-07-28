class Solution {
    unordered_map<int,int> umap;
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<bool> s(1005,false);
        for(auto a : arr) umap[a]++;
        for(auto u : umap){
            if(s[u.second] == false) {
                s[u.second] = true;
            }
            else {
                return false;
            }
        }

        return true;
    }
};