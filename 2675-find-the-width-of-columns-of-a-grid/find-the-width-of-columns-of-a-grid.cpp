class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int rows = grid.size(), cols = grid[0].size();

        vector<int> ans;
        for(int j = 0; j < cols; j++){
            int maxLen = 0;
            for(int i = 0; i < rows; i++){
                string s = to_string(grid[i][j]);
                if(s.length() > maxLen) maxLen = s.length();
            }
            ans.push_back(maxLen);
        }

        return ans;
    }

};