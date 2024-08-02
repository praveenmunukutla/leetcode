class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> uset(word.begin(), word.end());
        unordered_map<char,int> umap;
        for(auto w : uset){
            char wt = tolower(w);
            umap[wt]++;
        }

        int count = 0;
        for(auto u : umap){
            if(u.second == 2) count++;
        }
        return count;
    }
};