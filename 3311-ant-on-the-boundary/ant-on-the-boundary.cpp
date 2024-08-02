class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int ant = 0, count = 0;
        for(auto n : nums){
            if(n > 0)
                ant += n;
            else if(n < 0)
                ant += n;
            if(ant == 0) count++;
        }

        return count;
    }
};