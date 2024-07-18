class Solution {
public:
    // Initialization block to speed up I/O operations
    int speed = []() {
        ios::sync_with_stdio(false); // Disable synchronization with C I/O 
        cin.tie(NULL); // Untie cin from cout 
        cout.tie(NULL); // Untie cout (though this is not necessary) 
        return 0; 
    }(); 

    // Function to calculate the Hamming weight of an integer n
    int hammingWeight(int n) {
        int ans = 0; // Initialize a variable to store the count of 1 bits
        
        // Iterate through each bit of n
        while(n){
            if(n & 1)  // Check if the least significant bit (LSB) of n is 1
                ans++; // Increment the count if the LSB is 1
            n = n >> 1; // Shift n right by 1 bit to process the next bit
        }
        
        return ans; // Return the count of 1 bits (Hamming weight)
    }
};
