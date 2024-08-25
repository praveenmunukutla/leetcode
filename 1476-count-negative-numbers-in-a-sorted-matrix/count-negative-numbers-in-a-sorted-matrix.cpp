class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;
        int x = 0, y = cols-1;
        while(y >= 0 && x < rows){
            if(grid[x][y] < 0){
                count += rows-x;
                y--;
            }else {
                x++;
            }
        }
        return count;
    }
};