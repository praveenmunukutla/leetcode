class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        vector<int> ans;
        vector<int> seen;
        int index = -1;
        for(auto n : nums){
            if(n == -1){
               if(index < 0) ans.push_back(-1);
               else ans.push_back(seen[index--]);
            }else{
                seen.push_back(n);
                index = seen.size()-1;
            }
        }
        return ans;
    }
};