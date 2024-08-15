class Solution {
    queue<pair<int,int>> q;
public:
    vector<int> shortestToChar(string s, char ch) {

        int len = s.length();
        vector<int> dist = vector<int>(len, INT_MAX);
        for(int i = 0; i < len; i++){
            if(s[i] == ch){
                q.push({i,0});
            }
        }

        while(!q.empty()){
            auto c = q.front();q.pop();
            if(c.second < dist[c.first]){
                dist[c.first] = c.second;
                int left = c.first-1;
                int right = c.first+1;
                if(left >= 0){
                    q.push({left, c.second+1});
                }
                if(right < len){
                    q.push({right, c.second+1});
                }
            }
        }

        return dist;
    }
};