class Solution {
public:
    int binaryGap(int n) {
        int p1 = -1, p2 = -1; // Initialize positions of last and second last 1 bits
        int i = 0, ans = 0; // `i` is the bit position, `ans` stores the maximum gap

        while(n) {
            int d = n & 1; // Get the least significant bit

            if(d == 1) { // If the bit is 1
                if(p1 == -1) {
                    p1 = i; // Set p1 if it's the first 1 encountered
                } else {
                    ans = max(ans, i - p1); // Update the maximum gap
                    p1 = i; // Update p1 to the current position
                }
            }

            n = n >> 1; // Right shift to process the next bit
            i++; // Increment the bit position
        }

        return ans; // Return the maximum gap found
    }
};
