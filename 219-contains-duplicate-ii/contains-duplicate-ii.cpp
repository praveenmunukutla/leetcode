class Solution {
    unordered_map<int, int> umap;
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i = 0; i < nums.size(); i++){
            int n = nums[i];
            if(umap.find(n) == umap.end()){
                umap[n] = i;
            }else{
                int diff = abs(i - umap[n]);
                if(diff <= k) return true;
                umap[n] = i;
            }
        }

        return false;        
    }
};