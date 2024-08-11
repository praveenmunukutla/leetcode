class Solution {
public:
    int numSpecial(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<int> rows = vector<int>(r+1,0);
        vector<int> cols = vector<int>(c+1,0);
        for(int i = 0; i < r; i++){
            int count = 0;
            for(int j = 0; j < c; j++){
                if(matrix[i][j] == 1) count++;
            }
            rows[i] = count;
        }

        for(int i = 0; i < c; i++){
            int count = 0;
            for(int j = 0; j < r; j++){
                if(matrix[j][i] == 1) count++;
            }
            cols[i] = count;
        }

        int special = 0;
        for(int i = 0; i < r; i++){
            int count = 0;
            for(int j = 0; j < c; j++){
                if(matrix[i][j] == 1) {
                    if(rows[i] == 1 && cols[j] == 1) special++;
                }
            }
        }

        return special;
    }
};