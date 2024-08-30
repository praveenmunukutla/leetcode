class Solution {
public:
    // Function to determine the minimum number of moves required to replace all 'X' characters with 'O'
    int minimumMoves(string s) {
        int len = s.length(); // Get the length of the string
        int count = 0; // Initialize the move counter
        
        // Iterate through the string
        for (int i = 0; i < len; i++) {
            // Skip 'O' characters
            if (s[i] == 'O') continue;

            // For each 'X', increment the move counter and jump over the next two characters
            count++;
            i += 2;
        }
        
        return count; // Return the total number of moves
    }
};
