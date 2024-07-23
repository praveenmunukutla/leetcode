class Solution {
    unordered_set<char> umap;
public:
    int numJewelsInStones(string jewels, string stones) {
        for(auto j : jewels){
            umap.insert(j);
        }

        int count = 0;
        for(auto s : stones){
            if(umap.find(s) != umap.end()){
                count++;
            }
        }

        return count;
    }
};