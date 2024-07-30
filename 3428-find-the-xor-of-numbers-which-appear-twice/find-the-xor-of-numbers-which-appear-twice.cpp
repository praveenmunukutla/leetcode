class Solution {
    unordered_map<int,int> umap;
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        for(auto n : nums) umap[n]++;
        
        int ans = 0;
        for(auto u : umap){
            if(u.second == 2){
                if(ans == 0)
                    ans = u.first;
                else
                    ans ^= u.first;
            }
        }

        return ans;
    }
};