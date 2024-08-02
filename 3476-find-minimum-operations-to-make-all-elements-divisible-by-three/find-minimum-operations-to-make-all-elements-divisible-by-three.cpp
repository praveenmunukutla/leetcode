#include <vector>
using namespace std;

class Solution {
public:
    // Function to calculate the minimum number of operations needed
    int minimumOperations(vector<int>& nums) {
        int operations = 0;  // Initialize the count of operations

        // Iterate through each element in the vector
        for(auto& n : nums) {
            n = n % 3;  // Compute the remainder of the element when divided by 3

            // Check if the remainder is 1 or 2
            // These cases indicate that an operation is needed
            if(n == 1 || n == 2) operations++;
        }

        // Return the total number of operations needed
        return operations;
    }
};
