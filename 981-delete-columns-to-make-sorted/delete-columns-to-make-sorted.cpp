class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        vector<vector<char>> mat;
        
        for(auto str : strs){
            vector<char> v;
            for(auto c : str)
                v.push_back(c);
            mat.push_back(v);
        }

        int row = mat.size();
        int col = mat[0].size();

        int count = 0;
        for(int j = 0; j < col; j++){
            for(int i = 1; i < row; i++){
                if(mat[i][j] < mat[i-1][j]) {
                    count++;
                    break;
                }
            }
        }

        return count;
    }
};