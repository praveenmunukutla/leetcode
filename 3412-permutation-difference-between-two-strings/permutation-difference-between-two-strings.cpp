class Solution {
    unordered_map<char,int> umap;
public:
    int findPermutationDifference(string s, string t) {
        int index = 0;
        for(auto c : s)umap[c] = index++;

        index = 0;
        int sum = 0;
        for(auto c: t){
            umap[c] = umap[c] > index ? umap[c]-index : index - umap[c];
            index ++;
            sum += umap[c];
        }

        return sum;
    }
};