class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int> n(101, -1);
        for(auto n1 : nums){
            for(int i = n1[0]; i <= n1[1]; i++){
                n[i] = 1;
            }
        }
        int count = 0;
        for(int i = 1; i < 101; i++)if(n[i] == 1)count++;
        return count;
    }
};