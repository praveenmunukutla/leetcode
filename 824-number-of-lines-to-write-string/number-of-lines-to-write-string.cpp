#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    // Method to determine the number of lines and the width of the last line
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int rowcount = 0; // Count of rows used
        int width = 0;    // Current width of the line being processed
        
        // Iterate through each character in the string s
        for (auto c : s) {
            int cwidth = widths[c - 'a']; // Get the width of the current character
            width += cwidth; // Add the width of the character to the current line width
            
            // Check if adding this character exceeds the line width limit (100)
            if (width > 100) {
                width -= cwidth; // Revert the addition of the current character
                rowcount++;      // Move to the next row
                width = cwidth;  // Start the new row with the current character
            }
        }

        // Return the result as a vector with two elements:
        // 1. The total number of rows used
        // 2. The width of the last line
        return {rowcount + 1, width}; // +1 because the last line is not counted in the loop
    }
};
