class Solution {
    unordered_map<char,int> umap;
public:
    bool checkIfPangram(string sentence) {
        int count = 0;
        for(auto s : sentence){
            if(umap.find(s) == umap.end()){
                umap[s]++;
                count++;
            }
        }

        return count == 26;
    }
};