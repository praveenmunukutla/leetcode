class Solution {
public:
    int arraySign(vector<int>& nums) {
        int cn = 0, cz = 0;
        for(auto n : nums){
            if(n < 0)cn++;
            else if(n == 0) return 0;
        }

        if(cz > 0) return 0;
        return (cn%2==1) ? -1 : 1;
    }
};