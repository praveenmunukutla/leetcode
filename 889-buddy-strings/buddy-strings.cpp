class Solution {
    unordered_map<char, int> umap;
public:
    bool buddyStrings(string s, string goal) {
        if(s.length() != goal.length()) return false;
        
        int count = 0;
        int findex = -1, sindex = -1;
        for(int i = 0; s[i] != '\0'; i++){
            umap[s[i]]++;
            if(s[i] != goal[i]) {
                if(findex == -1) findex = i;
                else if(sindex == -1) sindex = i;
                count++;
            }
        }
        
        if(count > 2) return false;

        if(count == 2){
            swap(s[findex], s[sindex]);
            return s == goal;
        }

        if(count == 0){
            for(auto a : s){
                if(umap[a] >= 2) return true;
            }
        }


        return false;
    }
};