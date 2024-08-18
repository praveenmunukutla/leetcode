class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closer = INT_MAX;
        int ans = 0;
        for(auto n : nums){
            int absv = abs(n);
            if(absv < closer){
                closer = absv;
                ans = n;
            }else if(absv == closer){
                if(n > ans)
                    ans = n;
            }
        }

        return ans;
    }
};