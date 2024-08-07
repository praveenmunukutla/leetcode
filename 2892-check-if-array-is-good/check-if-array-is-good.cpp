class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(auto a : nums)
            umap[a]++;

        int size = nums.size()-1;        
        for(int i = 1; i < size; i++){
            if(umap[i] != 1) return false;
        }

        if(umap[size] != 2) return false;

        return true;
    }
};