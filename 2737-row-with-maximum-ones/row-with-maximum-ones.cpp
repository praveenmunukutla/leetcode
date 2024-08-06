class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans(2, 0); // Initialize result vector with two elements {rowIndex, maxOnesCount}
        int maxOnes = 0; // Initialize the maximum count of ones to 0

        // Iterate through each row of the matrix
        for(int i = 0; i < mat.size(); i++) {
            int count = 0; // Initialize the count of ones for the current row
            // Iterate through each element in the current row
            for(int j = 0; j < mat[i].size(); j++) {
                if(mat[i][j] == 1) {
                    count++; // Increment the count if the element is 1
                }
            }

            // If the current row has more ones than the previous maximum
            if(count > maxOnes) {
                maxOnes = count; // Update the maximum count of ones
                ans[0] = i; // Update the row index in the result vector
                ans[1] = count; // Update the count of ones in the result vector
            }
        }

        return ans; // Return the result vector
    }
};
