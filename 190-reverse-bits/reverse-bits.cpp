class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for (int i = 0; i < 32; ++i) {
            ans <<= 1; // Make space for the next bit
            ans |= (n & 1); // Set the last bit of ans to the last bit of n
            n >>= 1; // Shift n to the right to process the next bit
        }
        return ans;
    }
};
