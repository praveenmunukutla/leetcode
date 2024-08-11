class Solution {
    unordered_map<int, vector<int>> umap;  // Adjacency list representation of the graph
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size() + 1;  // Total number of nodes in the graph
        
        // Build the adjacency list
        for(auto e : edges) {
            umap[e[0]].push_back(e[1]);
            umap[e[1]].push_back(e[0]);
        }

        // Find the center node (the node connected to all other nodes)
        for(auto u : umap) {
            if(u.second.size() == n - 1)  // If a node is connected to n-1 other nodes, it's the center
                return u.first;
        }

        return -1;  // Return -1 if no center is found (should not happen in a valid star graph)
    }
};
