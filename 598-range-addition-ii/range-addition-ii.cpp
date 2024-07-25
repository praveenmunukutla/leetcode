#define min(a,b) ((a)>(b)?(b):(a))

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int rmin = INT_MAX, cmin = INT_MAX;
        for(int i = 0; i < ops.size(); i++){
            rmin = min(rmin, ops[i][0]);
            cmin = min(cmin, ops[i][1]);
        }

        if(rmin == INT_MAX && cmin == INT_MAX) return m*n;
        
        return rmin*cmin;
    }
};