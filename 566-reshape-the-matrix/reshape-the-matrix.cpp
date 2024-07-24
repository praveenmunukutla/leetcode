class Solution {
    vector<vector<int>> ans; // Declare a member variable to store the reshaped matrix
public:
      int speed = []() {
        ios::sync_with_stdio(false); // Disable synchronization with C I/O 
        cin.tie(NULL); // Untie cin from cout 
        cout.tie(NULL); // Untie cout (though this is not necessary) 
        return 0; 
    }(); 

    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int mrows = mat.size();     // Get the number of rows in the original matrix
        int mcols = mat[0].size();  // Get the number of columns in the original matrix

        // If the total number of elements does not match, return the original matrix
        if(mrows * mcols != r * c) return mat;

        // Initialize the reshaped matrix with dimensions r x c filled with zeros
        ans = vector<vector<int>>(r, vector<int>(c, 0));

        int element = 0; // Initialize a counter to keep track of the elements
        // Iterate over each element in the original matrix
        for(int i = 0; i < mrows; i++) {
            for(int j = 0; j < mcols; j++) {
                int irow = element / c;  // Calculate the row index in the reshaped matrix
                int icol = element % c;  // Calculate the column index in the reshaped matrix
                ans[irow][icol] = mat[i][j]; // Assign the element to the new position
                element++; // Move to the next element
            }
        }

        return ans; // Return the reshaped matrix
    }
};
