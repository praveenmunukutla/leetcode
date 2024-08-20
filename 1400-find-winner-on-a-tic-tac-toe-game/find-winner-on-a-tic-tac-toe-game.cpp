class Solution {
    int grid[3][3] = {0}; // Initialize a 3x3 grid to represent the tic-tac-toe board

public:
    string tictactoe(vector<vector<int>>& moves) {
        // Initialize the grid with -1 to indicate empty cells
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                grid[i][j] = -1;

        bool amoves = true; // Boolean flag to track if it's player A's move
        int count = 0; // Counter for the number of moves made
        
        // Process each move in the moves list
        for(auto m : moves){
            int x = m[0], y = m[1]; // Get the x and y coordinates of the move
            grid[x][y] = amoves ? 1 : 0; // Set the grid cell for the current player
            if(didwin(x, y, grid[x][y])){
                return amoves ? "A" : "B"; // Return the winner if there is a winning condition
            }
            amoves = !amoves; // Switch to the other player
            count++; // Increment the move counter
        }

        // If all cells are filled, return "Draw"; otherwise, return "Pending"
        return count == 9 ? "Draw" : "Pending";
    }

    bool didwin(int x, int y, int checkVal){
        int val = grid[x][y]; // The value of the current move
        
        // Check row for win
        int a = grid[x][0], b = grid[x][1], c = grid[x][2];
        
        // Check column for win
        int d = grid[0][y], e = grid[1][y], f = grid[2][y];

        // Check diagonals for win
        int g, h, i, j, k;
        if(x == y || x + y == 2){
            g = grid[0][0], h = grid[1][1], i = grid[2][2];
            j = grid[0][2], k = grid[2][0];
        }

        // Check if any of the rows, columns, or diagonals have all cells with the same value
        if(a == checkVal && a == b && b == c) return true;
        else if(d == checkVal && d == e && e == f) return true;
        else if(g == checkVal && g == h && h == i) return true;
        else if(j == checkVal && j == h && h == k) return true;

        return false; // No winning condition met
    }
};
