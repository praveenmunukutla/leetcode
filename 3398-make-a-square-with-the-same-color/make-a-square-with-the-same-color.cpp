class Solution {
public:
    bool isPossible(char a, char b, char c, char d){
        int cb = 0, cw = 0;
        a == 'W' ? cw++ : cb++;
        b == 'W' ? cw++ : cb++;
        c == 'W' ? cw++ : cb++;
        d == 'W' ? cw++ : cb++;

        if(cw == 3 && cb == 1) return true;
        if(cw == 1 && cb == 3) return true;
        if(cw == 4 && cb == 0) return true;
        if(cw == 0 && cb == 4) return true;
        return false;
    }


    bool canMakeSquare(vector<vector<char>>& grid) {
        char c1 = grid[0][0],c2 = grid[0][1],c3 = grid[0][2],
            c4 = grid[1][0],c5 = grid[1][1],c6 = grid[1][2],
            c7 = grid[2][0],c8 = grid[2][1],c9 = grid[2][2];

         
        return isPossible(c1,c2,c4,c5) || 
               isPossible(c2,c3,c5,c6) || 
               isPossible(c4,c5,c7,c8) || 
               isPossible(c5,c6,c8,c9);
    }
};