class Solution {
    queue<pair<int,int>> q; // Queue to store pairs of indices and their corresponding distances
public:
    vector<int> shortestToChar(string s, char ch) {
        int len = s.length();
        vector<int> dist(len, INT_MAX); // Initialize distances with INT_MAX

        // Push all occurrences of character 'ch' into the queue with distance 0
        for(int i = 0; i < len; i++){
            if(s[i] == ch){
                q.push({i, 0});
            }
        }

        // BFS to calculate shortest distances
        while(!q.empty()){
            auto c = q.front(); q.pop(); // Get the current index and distance
            if(c.second < dist[c.first]){ // If current distance is shorter, update it
                dist[c.first] = c.second;
                int left = c.first - 1;
                int right = c.first + 1;

                // Push neighboring indices with updated distances
                if(left >= 0){
                    q.push({left, c.second + 1});
                }
                if(right < len){
                    q.push({right, c.second + 1});
                }
            }
        }

        return dist; // Return the array of shortest distances
    }
};
