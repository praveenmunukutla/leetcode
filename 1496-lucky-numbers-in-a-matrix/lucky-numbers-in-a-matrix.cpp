class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> minv = vector<int>(rows,0);
        vector<int> maxv = vector<int>(cols,0);

        for(int i = 0; i < rows; i++){
            int minEle = INT_MAX;
            for(int j = 0; j < cols; j++){
                minEle = min(minEle, matrix[i][j]);
            }
            minv[i] = minEle;
        }

        for(int j = 0; j < cols; j++){
            int maxEle = INT_MIN;
            for(int i = 0; i < rows; i++){
                maxEle = max(maxEle, matrix[i][j]);
            }
            maxv[j] = maxEle;
        }

        vector<int> ans;
        int mint = min(rows, cols);
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(matrix[i][j] == minv[i] && matrix[i][j] == maxv[j])
                    ans.push_back(matrix[i][j]);
            }
        }

        return ans;
    }
};