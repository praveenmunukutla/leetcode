class Solution {
    unordered_map<char,int> umap;
public:
    bool areOccurrencesEqual(string s) {
        int maxval = INT_MIN;
        for(auto c : s){
            umap[c]++;
            maxval = max(maxval, umap[c]);
        }

        for(auto u : umap){
            if(u.second != maxval) return false;
        }

        return true;
    }
};