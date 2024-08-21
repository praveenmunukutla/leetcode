class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows = grid.size();            // Number of rows
        int cols = grid[0].size();         // Number of columns
        int totElements = rows * cols;     // Total number of elements

        vector<vector<int>> newGrid(rows, vector<int>(cols, 0));  // Initialize new grid

        for (int i = 0, count = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                int val = grid[i][j];      // Current value
                int pos = count++;         // Current position in 1D view

                int npos = (pos + k) % totElements;  // New position after shift
                int nx = npos / cols;      // New row index
                int ny = npos % cols;      // New column index

                newGrid[nx][ny] = val;     // Place value in new grid
            }
        }

        return newGrid;  // Return shifted grid
    }
};
