class Solution {
public:
    // bool hasAlternatingBits(int n) {
    //     int fb = n & 1;  // Get the least significant bit (LSB)
    //     n = n >> 1;      // Shift right to check the next bit

    //     while (n > 0) {
    //         int sb = n & 1;  // Get the current LSB

    //         // If the current bit is the same as the previous bit, return false
    //         if (sb == fb) return false;

    //         // Update the previous bit and shift right to check the next bit
    //         fb = sb;
    //         n = n >> 1;
    //     }

    //     return true;  // If all adjacent bits are different, return true
    // }
    bool hasAlternatingBits(int n) {
        long long int x = (n ^ (n >> 1));
        return (x & (x+1)) == 0;
    }
};
