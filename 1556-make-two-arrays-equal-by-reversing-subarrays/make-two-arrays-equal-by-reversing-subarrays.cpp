class Solution {
    unordered_map<int,int> umap;
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        for(auto t : target)umap[t]++;
        for(auto a : arr)umap[a]--;
        for(auto u : umap){
            if(u.second != 0) return false;
        }
        return true;
    }
};