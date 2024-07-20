class Solution {
    vector<vector<int>> agrid;
    int rows, cols;
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
        agrid = move(grid);
        rows = agrid.size();
        cols = agrid[0].size();
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(agrid[i][j])
                    ans += getPerimeter(i, j);
            }
        }
        return ans;
    }

    int getPerimeter(int row, int col) {
        int perimeter = 4;
        if(row > 0 && agrid[row-1][col])
            perimeter--;
        if(row+1 < rows && agrid[row+1][col])
            perimeter--;
        if(col > 0 && agrid[row][col-1])
            perimeter--;
        if(col+1 < cols && agrid[row][col+1])
            perimeter--;
        return perimeter;
    }
};