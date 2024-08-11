class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
         vector<vector<int>> umap = vector<vector<int>>(n+1, vector<int>(12, 0));
        for(auto p : pick){
            int x = p[0];
            int y = p[1];
            umap[x][y]++;
        }

        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= 10; j++){
                if(umap[i][j] > i) {
                    count++;
                    break;
                }
            }
        }

        return count;
    }
};