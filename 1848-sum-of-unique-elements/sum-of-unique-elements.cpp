class Solution {
    unordered_map<int, int> umap;
public:
    int sumOfUnique(vector<int>& nums) {
        for(auto n : nums) umap[n]++;
        int sum = 0;
        for(auto u : umap){
            if(u.second == 1) sum += u.first;
        }
        return sum;
    }
};