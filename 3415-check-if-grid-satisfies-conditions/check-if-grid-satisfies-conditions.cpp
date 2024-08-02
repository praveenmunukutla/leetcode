class Solution {
    int row, col;
public:
    inline bool isValid(vector<vector<int>>& grid, int x, int y){
        if(x+1 < row){
            if(grid[x][y] !=grid[x+1][y]) return false;
        }

        if(y+1 < col){
            if(grid[x][y] == grid[x][y+1]) return false;
        }

        return true;
    }

    bool satisfiesConditions(vector<vector<int>>& grid) {
        row = grid.size(), col = grid[0].size();
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(!isValid(grid, i,j)) return false;
            }
        }

        return true;
    }
};