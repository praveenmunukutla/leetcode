class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int len = nums.size();
        vector<int> ans(len,0);

        for(int i = 0; i < len; i++){
            int ind = index[i];
            int val = nums[i];

            for(int j = len-1; j > 0 && j > ind; j--){
                ans[j] = ans[j-1];
            }

            ans[ind] = val;
        }

        return ans;
    }
};