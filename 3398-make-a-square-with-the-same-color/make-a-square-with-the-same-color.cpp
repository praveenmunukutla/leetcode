class Solution {
public:
    // Function to check if it's possible to form a square with 3 'W' and 1 'B'
    // or 3 'B' and 1 'W', or all 'W', or all 'B' in the given 2x2 grid.
    bool isPossible(char a, char b, char c, char d){
        int cb = 0, cw = 0;

        // Count the number of 'W' and 'B' in the 2x2 grid
        a == 'W' ? cw++ : cb++;
        b == 'W' ? cw++ : cb++;
        c == 'W' ? cw++ : cb++;
        d == 'W' ? cw++ : cb++;

        // Check the conditions for forming a square
        if(cw == 3 && cb == 1) return true;
        if(cw == 1 && cb == 3) return true;
        if(cw == 4 && cb == 0) return true;
        if(cw == 0 && cb == 4) return true;
        
        // If none of the conditions are met, return false
        return false;
    }

    // Function to check if we can form a 2x2 square in the given 3x3 grid
    bool canMakeSquare(vector<vector<char>>& grid) {
        // Extract the characters from the 3x3 grid
        char c1 = grid[0][0], c2 = grid[0][1], c3 = grid[0][2],
             c4 = grid[1][0], c5 = grid[1][1], c6 = grid[1][2],
             c7 = grid[2][0], c8 = grid[2][1], c9 = grid[2][2];

        // Check all possible 2x2 subgrids
        return isPossible(c1, c2, c4, c5) || 
               isPossible(c2, c3, c5, c6) || 
               isPossible(c4, c5, c7, c8) || 
               isPossible(c5, c6, c8, c9);
    }
};
