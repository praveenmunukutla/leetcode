#include <vector>
using namespace std;

class Solution {
public:
    // Function to check if the array is "special"
    bool isArraySpecial(vector<int>& nums) {
        // Iterate through the array, stopping at the second-to-last element
        for(int i = 0; i < nums.size() - 1; i++) {
            // Check if the current element is even
            bool n1 = nums[i] % 2 == 0;
            // Check if the next element is even
            bool n2 = nums[i + 1] % 2 == 0;
            
            // If both elements are either even or odd, the array is not "special"
            if(n1 == n2) return false;
        }
        // If all adjacent elements have different parity, the array is "special"
        return true;
    }
};
