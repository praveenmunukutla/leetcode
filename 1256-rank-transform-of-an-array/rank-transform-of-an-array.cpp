class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_set<int> uset(arr.begin(), arr.end());
        priority_queue<int, vector<int>, greater<int>> pq(uset.begin(), uset.end());
        unordered_map<int,int> umap;
        int rank = 1;
        while(!pq.empty()){
            int v = pq.top(); pq.pop();
            umap[v] = rank++;
        }

        vector<int> res;
        for(auto a : arr)
            res.push_back(umap[a]);

        return res;
    }
};