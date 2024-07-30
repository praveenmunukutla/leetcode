class Solution {
    unordered_map<int, int> umap;
public:
    int mostFrequentEven(vector<int>& nums) {
        for(auto n : nums){
            if(n % 2 == 0)
                umap[n]++;
        }

        int freqCount = INT_MIN;
        int num = INT_MAX;

        for(auto u : umap){
            if(u.second > freqCount){
                freqCount = u.second;
                num = u.first;
            }else if(u.second == freqCount && u.first < num){
                num = u.first;
            }
        }
        
        return num == INT_MAX ? -1 : num;
    }
};