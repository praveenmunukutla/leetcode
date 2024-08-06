class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int rows = nums.size(), cols = nums[0].size();
        auto isPrime = [&](int a){
            if(a == 1) return false;
            for(int i = 2; i*i <= a; i++){
                if(a%i == 0) return false;
            }
            return true;
        };
        
        int maxPrime = 0;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(i == j || i+j == cols-1){
                    if(isPrime(nums[i][j])) maxPrime = max(maxPrime, nums[i][j]);
                }
            }
        }

        return maxPrime;
    }
};