class Solution {
public:
    bool isPowerOfFour(int n) {
        // Check if n is positive
        if (n <= 0) return false;

        // Loop to divide n by 4
        while (n > 1) {
            // If n is not divisible by 4, it's not a power of four
            if (n % 4 != 0) return false;
            // Divide n by 4
            n = n / 4;
        }

        // If n is reduced to 1, it is a power of four
        return n == 1;
    }
};
