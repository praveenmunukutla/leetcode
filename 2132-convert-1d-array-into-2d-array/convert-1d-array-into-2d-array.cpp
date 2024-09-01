class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(m*n != original.size()) return {};

        vector<vector<int>> res(m, vector<int>(n, 0));     
        
        for(int i = 0; i < original.size(); i++){
            int r = i/n;
            int c = i%n;
            res[r][c] = original[i];        
        }

        return res;
    }
};