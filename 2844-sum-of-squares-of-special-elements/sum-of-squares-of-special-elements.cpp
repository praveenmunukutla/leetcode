class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int index = 1;
        for(auto nu : nums){
            if(n % index == 0) {
                sum += (nu*nu);
            }
            index++;
        }
        return sum;
    }
};