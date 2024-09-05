class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        vector<vector<int>> res;
        int size = nums.size();

        sort(nums.begin(), nums.end());

        for(int i = 0; i < size; i++){
            int j = i+1;
            int k = size-1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    s.insert({nums[i], nums[j], nums[k]}); 
                    j++;
                    k--;
                }else if(sum > 0){
                    k--;
                }else {
                    j++;
                }
            }
        }

        for(auto triplets : s)
            res.emplace_back(move(triplets));


        return res;
    }
};