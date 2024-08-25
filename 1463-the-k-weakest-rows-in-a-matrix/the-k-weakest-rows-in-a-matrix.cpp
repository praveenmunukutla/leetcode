class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int rows = mat.size();
        int cols = mat[0].size();
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
        for(int i = 0; i < rows; i++){
            int sum = 0;
            for(int j = 0; j < cols; j++){
                 if(mat[i][j]==1)sum++;
            }
            pq.push({sum,i});
        }

        vector<int> res;
        while(k--){
            auto [sum, index] = pq.top();pq.pop();
            res.push_back(index);
        }
        return res;
    }
};