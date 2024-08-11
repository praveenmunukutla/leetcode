class Solution {
    unordered_map<char, unordered_set<char>> umap;
public:
    string greatestLetter(string s) {
        for(auto c : s){
            umap[toupper(c)-'A'].insert(c);
        }

        char mstr = '#';
        for(auto u : umap){
            char curr = u.first+'A';
            if(u.second.size() == 2){
                if(mstr == '#'){
                    mstr = curr;
                }else if(curr > mstr){
                    mstr = curr;
                }
            }
        }
        
        if(mstr == '#') return "";

        return string(1, mstr);
    }
};