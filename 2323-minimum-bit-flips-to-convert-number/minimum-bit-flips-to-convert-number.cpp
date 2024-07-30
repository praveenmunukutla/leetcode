class Solution {
public:
    int minBitFlips(int start, int goal) {
        // Perform XOR to find differing bits
        int xr = start ^ goal;
        // Initialize count of bit flips
        int count = 0;
        // Count the number of 1s in the XOR result
        while (xr) {
            count++;
            // Clear the least significant bit set to 1
            xr = xr & (xr - 1);
        }
        // Return the total number of bit flips
        return count;
    }
};
