class Solution {
    int grid[3][3] = {0};
public:
    string tictactoe(vector<vector<int>>& moves) {
        for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            grid[i][j] = -1;

        bool amoves = true;
        int count = 0;
        for(auto m : moves){
            int x = m[0], y = m[1];
            grid[x][y] = amoves ? 1 : 0;
            if(didwin(x, y, amoves)){
                return amoves ? "A" : "B";
            }
            amoves = !amoves;
            count++;
        }

        return count == 9 ? "Draw" : "Pending";
    }

    bool didwin(int x, int y, bool didamove){
        int val = grid[x][y];
        // row
        int a = grid[x][0], b = grid[x][1], c = grid[x][2];
           
        // col
        int d = grid[0][y], e = grid[1][y], f = grid[2][y];

        // dia
        int g,h,i,j,k;
        if(x == y || x + y == 2){
            g = grid[0][0], h = grid[1][1], i = grid[2][2];
            j = grid[0][2], k = grid[2][0];
        }

        if(didamove){
            if(a == 1 && a == b && b == c) return true;
            else if(d == 1 && d == e && e == f) return true;
            else if(g == 1 && g == h && h == i) return true;
            else if(j == 1 && j == h && h == k) return true;
        }else{
            if(a == 0 && a == b && b == c) return true;
            else if(d == 0 && d == e && e == f) return true;
            else if(g == 0 && g == h && h == i) return true;
            else if(j == 0 && j == h && h == k) return true;
        }

        return false;
    }
};