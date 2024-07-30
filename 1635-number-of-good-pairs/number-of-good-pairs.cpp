class Solution {
    unordered_map<int,int> umap;
public:
    int numIdenticalPairs(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            umap[nums[i]]++;
        }

        int count = 0;
        for(auto u : umap){
            count += ((u.second * (u.second-1))/2);
        }
        return count;
    }
};