class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows = grid.size();
        int cols = grid[0].size();
        int totElements = rows*cols;

        vector<vector<int>> newGrid(rows, vector<int>(cols, 0));

        for(int i = 0, count = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                int val = grid[i][j];
                int pos = count++;

                int npos = (pos + k)%totElements;
                int nx = npos/cols;
                int ny = npos%cols;
                newGrid[nx][ny] = val;

            }
        }

        return newGrid;
    }
};