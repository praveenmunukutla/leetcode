class Solution {
    int rows, cols;
public:
    bool isValid(int x, int y){
        if(x < 0 || x >= rows || y < 0 || y >= cols) return false;
        return true;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        rows = img.size();
        cols = img[0].size();
        vector<vector<int>> res = vector<vector<int>>(rows, vector<int>(cols, 0));

        int xM[] = {-1,-1,-1,0,1,1,1,0};
        int yM[] = {-1,0,1,1,1,0,-1,-1};

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){

                int x = i, y = j;
                int val = img[x][y];
                int count = 1;
                for(int k = 0; k < 8; k++){
                    int nx = x + xM[k];
                    int ny = y + yM[k];
                    if(isValid(nx,ny)){
                        val += img[nx][ny];
                        count++;
                    }
                }

                val = floor(val/count);
                res[i][j] = val;
            }
        }

        return res;
    }
};

  /*
    x-1,y-1  x-1,y      x-1,y+1
    x,y-1     x,y       x, y+1
    x+1,y-1  x+1,y      x+1,y+1
  */