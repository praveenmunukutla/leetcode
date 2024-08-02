class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int ant = 0; // Initialize a variable to keep track of the running sum
        int count = 0; // Initialize the count of zero-sum segments

        // Iterate through each element in the input vector
        for(auto n : nums) {
            if(n > 0)
                ant += n; // Add positive numbers to the running sum
            else if(n < 0)
                ant += n; // Add negative numbers to the running sum

            // If the running sum is zero, increment the count
            if(ant == 0) count++;
        }

        return count; // Return the total count of zero-sum segments
    }
};
