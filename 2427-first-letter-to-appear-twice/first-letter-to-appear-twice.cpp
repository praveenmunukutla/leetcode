class Solution {
    unordered_map<int, vector<int>> umap;
public:
    char repeatedCharacter(string s) {
        for(int i = 0; i < s.length(); i++){
            umap[s[i]].push_back(i);
        }

        char ans = ' ';
        int sIndex = -1;
        for(auto u : umap){
            if(u.second.size() > 1){
                if(sIndex == -1){
                    ans = u.first;
                    sIndex = u.second[1];
                }else if(u.second[1] < sIndex){
                    ans = u.first;
                    sIndex = u.second[1];
                }
            }
        }

        return ans;
    }
};