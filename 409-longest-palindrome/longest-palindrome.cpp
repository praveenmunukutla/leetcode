class Solution {
   unordered_map<char, int> umap;
public:
    int longestPalindrome(string s) {
        for(auto c : s) umap[c]++;
        int ans = 0;

        bool hasOdds = false;
        for(auto u : umap){
            if(u.second % 2 == 0)ans += u.second;
            else {
                ans += u.second-1;
                hasOdds = true;
            }
        }
        
        if(hasOdds)
            ans+=1;
        
        return ans;
    }
};