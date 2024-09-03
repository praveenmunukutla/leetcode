class Solution {
public:
    string convert(string s, int numRows) {
        // Return the string as is if no zigzag pattern is needed.
        if(numRows == 1) return s;

        // Store characters for each row.
        vector<string> ans(numRows, "");
        int index = 0;
        int direction = 1;

        // Traverse through the string.
        for(auto c : s) {
            ans[index] += c;  // Add character to the current row.
            
            // Change direction at the first or last row.
            if(index == numRows - 1) direction = -1;
            else if(index == 0) direction = 1;

            index += direction;  // Move to the next row.
        }

        // Concatenate all rows to form the final result.
        string ansstr = "";
        for(auto a : ans) ansstr += a;

        return ansstr;
    }
};
