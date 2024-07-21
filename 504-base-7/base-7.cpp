class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0"; // Handle the special case for 0
        
        string ans = "";
        bool isNegative = num < 0; // Check if the number is negative
        if (isNegative) num = -num; // Convert num to positive for processing
        
        while (num > 0) { // Process the number while it is greater than 0
            int d = num % 7; // Get the remainder when divided by 7
            ans.insert(0, to_string(d)); // Insert the digit at the beginning of the result string
            num /= 7; // Update num by dividing it by 7
        }
        
        if (isNegative) 
            ans.insert(0, "-"); // Add the negative sign if the original number was negative
        
        return ans; // Return the result
    }
};
