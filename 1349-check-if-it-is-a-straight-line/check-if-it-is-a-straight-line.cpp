class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        if(n < 2) return true;

        auto x0 = coordinates[0][0];
        auto y0 = coordinates[0][1];
        auto x1 = coordinates[1][0];
        auto y1 = coordinates[1][1];
        
        int dx = x1-x0;
        int dy = y1-y0;

        for(int i = 2; i < coordinates.size(); i++){
            
            int xi = coordinates[i][0];
            int yi = coordinates[i][1];

            int dx_i = xi-x0;
            int dy_i = yi-y0;

            if(dx*dy_i != dy*dx_i) return false;
        }

        return true;
    }
};