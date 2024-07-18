class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;  // Initialize the result variable to store the column number
        
        // Traverse each character in the column title string
        for (char c : columnTitle) {
            // Calculate the position value of the current character in the alphabet
            int value = c - 'A' + 1;
            
            // Update ans by shifting left (multiplying by 26) and adding the current character's value
            ans = ans * 26 + value;
        }

        return ans;  // Return the final column number
    }
};
