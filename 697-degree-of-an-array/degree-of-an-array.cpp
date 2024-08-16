class Solution {
    unordered_map<int, tuple<int,int,int>> umap;
public:
    int findShortestSubArray(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            if(umap.find(nums[i]) == umap.end()){
                umap[nums[i]] = {1, i, -1};
            }else{
                auto& [f,fi,si] = umap[nums[i]];
                f++;
                si = i;
            }
        }
        
        int minSub = INT_MAX;
        int maxFreq = INT_MIN;

        for(auto u : umap){
            auto [f,fi,si] = u.second;
            auto sasize = si == -1 ? f : si-fi+1;
            if(f > maxFreq){
                minSub = INT_MAX;
                minSub = min(minSub, sasize);       
                maxFreq = max(maxFreq, f);
            }else if(f == maxFreq){
                minSub = min(minSub, sasize);
            }
        }
        
        return minSub;
    }
};