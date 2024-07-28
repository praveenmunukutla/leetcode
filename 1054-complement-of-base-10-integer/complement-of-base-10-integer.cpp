class Solution {
public:
    int bitwiseComplement(int n) {
        // Special case for n = 0, as its complement should be 1
        if(n == 0) return 1;

        int dec = 0;  // This will hold the decimal value of the complement
        int power = 1;  // Power of 2 that will be used to construct the decimal value

        // Loop until n becomes 0
        while(n){
            // Get the least significant bit of n
            int d = n & 1;
            // Flip the bit
            d = d ^ 1;

            // If the flipped bit is 1, add the current power of 2 to the decimal value
            if(d)
                dec += power;

            // Move to the next power of 2
            power = 2 * power;

            // Right shift n to process the next bit
            n = n >> 1;
        }

        // Return the decimal value of the bitwise complement
        return dec;
    }
};
