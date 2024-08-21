class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int> rows(m,0);
        vector<int> cols(n,0);

        for(auto i : indices){
            auto x = i[0];
            auto y = i[1];
            rows[x]++;
            cols[y]++;
        }

        int oddCount = 0;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n ; j++){
                if((rows[i]+cols[j]) % 2 == 1) oddCount++;
            }
        }

        return oddCount;
    }
};