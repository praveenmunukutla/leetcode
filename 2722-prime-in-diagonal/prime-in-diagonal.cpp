class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int rows = nums.size(), cols = nums[0].size();

        // Lambda to check if a number is prime
        auto isPrime = [&](int a){
            if(a <= 1) return false; // 0 and 1 are not prime
            for(int i = 2; i * i <= a; i++){
                if(a % i == 0) return false; // Not prime if divisible by any number other than 1 and itself
            }
            return true;
        };
        
        int maxPrime = 0;

        // Iterate through the matrix
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                // Check if the element is on a diagonal
                if(i == j || i + j == cols - 1){
                    // If the element is prime, update maxPrime
                    if(isPrime(nums[i][j])) maxPrime = max(maxPrime, nums[i][j]);
                }
            }
        }

        return maxPrime;
    }
};
