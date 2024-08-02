class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        for(int j = 0; j < cols; j++){
            int maxn = INT_MIN;
            for(int i = 0; i < rows; i++)
                maxn = max(maxn, matrix[i][j]);

            for(int i = 0; i < rows; i++)
                if(matrix[i][j] == -1) matrix[i][j] = maxn;
        }
        return matrix;
    }
};