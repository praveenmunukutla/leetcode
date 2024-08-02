class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for(int i = 0; i < nums.size()-1;i++){
            bool n1 = nums[i]%2 == 0;
            bool n2 = nums[i+1]%2 == 0;
            if(n1 == n2) return false;
        }
        return true;
    }
};