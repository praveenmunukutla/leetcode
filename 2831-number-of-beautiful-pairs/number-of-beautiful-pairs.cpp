class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        vector<int> f(nums.size()); // Vector to store the first digits of each number
        vector<int> l(nums.size()); // Vector to store the last digits of each number
        int index = 0;
        
        // Extract the first and last digits of each number in the input vector
        for(auto n : nums) {
            int fd = 0;
            // Determine the first digit
            if(n >= 1000) {
                fd = n / 1000; // For numbers >= 1000
            } else if(n >= 100) {
                fd = n / 100; // For numbers >= 100
            } else if(n >= 10) {
                fd = n / 10; // For numbers >= 10
            } else {
                fd = n; // For numbers < 10
            }
            
            f[index] = fd; // Store the first digit
            l[index] = n % 10; // Store the last digit
            index++;
        }
        
        int count = 0;
        // Compare pairs of numbers to check if their first and last digits form a beautiful pair
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                // Check if the GCD of the first digit of nums[i] and the last digit of nums[j] is 1
                if(gcd(f[i], l[j]) == 1) {
                    count++;
                }
            }
        }
        return count;
    }

private:
    // Helper function to calculate the GCD of two numbers using the Euclidean algorithm
    inline int gcd(int a, int b) {
        if(b == 0) return a; // Base case
        return gcd(b, a % b); // Recursive case
    }
};
