class Solution {
public:
    int numberOfSteps(int num) {
        // Initialize the count of steps to 0
        int count = 0;
        
        // Loop until the number becomes 0
        while (num) {
            // If the number is even, divide it by 2
            // If the number is odd, subtract 1
            num = num % 2 == 0 ? num / 2 : num - 1;
            
            // Increment the step count for each operation
            count++;
        }
        
        // Return the total number of steps taken
        return count;
    }
};
