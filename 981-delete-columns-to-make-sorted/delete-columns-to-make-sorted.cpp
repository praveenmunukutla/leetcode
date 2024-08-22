class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        vector<vector<char>> mat;
        
        // Convert each string into a vector of characters and store it in `mat`
        for(auto str : strs){
            vector<char> v;
            for(auto c : str)
                v.push_back(c);
            mat.push_back(v);
        }

        int row = mat.size();      // Number of rows in the matrix (number of strings)
        int col = mat[0].size();   // Number of columns in the matrix (length of the strings)

        int count = 0;
        // Iterate over each column
        for(int j = 0; j < col; j++){
            // Check if the column is sorted in non-decreasing order
            for(int i = 1; i < row; i++){
                if(mat[i][j] < mat[i-1][j]) {  // If current element is smaller than the previous row element in the same column
                    count++;                    // Increment the count of columns to be deleted
                    break;                      // Move to the next column since this one is unsorted
                }
            }
        }

        return count;  // Return the number of columns that need to be deleted
    }
};
