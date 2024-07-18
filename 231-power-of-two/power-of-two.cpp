class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Check if n is greater than 0 and if n is a power of two
        return n > 0 && ((n & (n - 1)) == 0);
    }
};
