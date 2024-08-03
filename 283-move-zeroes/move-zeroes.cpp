class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0; // Initialize index to keep track of the position for the next non-zero element
        
        // First pass: Move all non-zero elements to the beginning of the vector
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) { // If the current element is not zero
                nums[index++] = nums[i]; // Place it at the current index and increment the index
            }
        }
        
        // Second pass: Fill the remaining positions in the vector with zeroes
        for(int i = index; i < nums.size(); i++) {
            nums[i] = 0; // Set the element at the current position to zero
        }
    }
};
