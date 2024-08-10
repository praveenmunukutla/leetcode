class Solution {
    unordered_map<int, vector<int>> alist;
    vector<bool> visited;
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        visited = vector<bool>(n+1, false);
        for(auto e : edges){
            alist[e[0]].push_back(e[1]);
            alist[e[1]].push_back(e[0]);
        }
        
        return Util(source, destination);
    }

    bool Util(int source, int destination){

        if(visited[source] == true) return false;
        
        visited[source] = true;

        if(destination == source) return true;

        visited[source] = true;

        auto sourceEdges = alist[source];
        bool isValid = false;
        for(auto e : sourceEdges){
            isValid = isValid || Util(e, destination);
        }

        return isValid;
    }
};