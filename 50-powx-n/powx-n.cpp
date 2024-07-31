class Solution {
public:
    double myPow(double x, int n) {
        bool isnegative = n < 0; // Check if n is negative
        long n1 = n; // Convert n to long to handle edge cases
        if(isnegative)
            n1 = -n1; // Make n positive if it is negative
        auto val = myPowUtil(x, n1); // Compute power using helper function
        return isnegative ? 1/val : val; // Return reciprocal if n was negative
    }

    double myPowUtil(double x, long n) {
        if (n == 0) return 1; // Base case: x^0 = 1
        
        auto v = myPowUtil(x, n / 2); // Recursive call with n divided by 2
        auto sqv = v * v; // Square the result of the recursive call

        if (n % 2 == 0) // If n is even, return the squared value
            return sqv;

        return x * sqv; // If n is odd, multiply by x
    }
};
