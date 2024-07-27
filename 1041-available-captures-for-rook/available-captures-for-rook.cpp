class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int rx = -1, ry = -1;
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(board[i][j] == 'R'){
                    rx = i, ry = j;
                    break;
                }
            }
            if(rx != -1 && ry != -1) break;
        }

        int xM[] = {-1,1,0,0};
        int yM[] = {0,0,1,-1};

        int count = 0;
        for(int dir = 0; dir < 4; dir++){
            int nrx = rx, nry = ry;
            nrx = nrx + xM[dir];
            nry = nry + yM[dir];
            while(nrx >= 0 && nrx < 8 && nry >= 0 && nry < 8){
                if(board[nrx][nry] == 'B'){
                    break;
                }else if (board[nrx][nry] == 'p'){
                    count++;
                    break;
                }
                nrx = nrx + xM[dir];
                nry = nry + yM[dir];
            }
        }

        return count;
    }
};