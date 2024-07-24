class Solution {
    vector<vector<int>> ans;
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int mrows = mat.size();
        int mcols = mat[0].size();

        if(mrows*mcols != r*c) return mat;

        ans = vector<vector<int>>(r, vector<int>(c,0));

        int element = 0;
        for(int i = 0; i < mrows; i++){
            for(int j = 0; j < mcols; j++){
                int irow = element/c;
                int icol = element%c;
                ans[irow][icol] = mat[i][j];
                element++;
            }
        }

        return ans;
    }
};
