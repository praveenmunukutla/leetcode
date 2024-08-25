class Solution {
public:
    bool squareIsWhite(string c) {
        int row = c[1] - '0';        // Convert the row character to an integer (e.g., '2' -> 2)
        int col = c[0] - 'a' + 1;    // Convert the column character to an integer (e.g., 'a' -> 1, 'b' -> 2)
        
        // A square is white if the sum of row and col is odd
        return (row + col) % 2 == 1;
    }
};
