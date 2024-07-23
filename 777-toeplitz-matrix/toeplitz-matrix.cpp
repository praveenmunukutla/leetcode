class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        for(int i = 0; i < cols; i++){
            int val = matrix[0][i];
            for(int j = 1, k = i+1; j < rows && k < cols; j++,k++){
                if(matrix[j][k] != val) return false;
            }
        }
    
        for(int i = 1; i < rows; i++){
            int val = matrix[i][0];
            for(int j = i+1, k = 1; j< rows && k < cols; j++, k++){
                if(matrix[j][k] != val) return false;
            }
        }

        return true;
    }
};