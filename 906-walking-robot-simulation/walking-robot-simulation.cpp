#define edist(x,y) (((x)*(x))+((y)*(y)))
class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int ans = INT_MIN;
        unordered_map<int,unordered_set<int>> xymap;
        for(auto o : obstacles) {
            xymap[o[0]].insert(o[1]);
        }

        int x = 0, y = 0, dir = 0;
        // 0 - up, 1 - right, 2 - down, 3 - left.
        for(auto c : commands){
            if(c == -1){
                // right;
                if(dir == 3) dir = 0;
                else dir = dir + 1;

            }else if(c == -2){
                // left;
                if(dir == 0) dir = 3;
                else dir = dir - 1;
            }
            else {
                int k = c;
                if(dir == 0){
                    //up
                    for(int i = 1; i <= k; i++){
                        int ty = y + 1;
                        if((xymap.find(x) != xymap.end()) && xymap[x].count(ty)){
                            break;
                        }
                        y = ty;                        
                    }

                    ans = max(ans, edist(x,y));

                }else if(dir == 1){
                    //right
                    for(int i = 1; i <= k; i++){
                        int tx = x + 1;
                        if(xymap.find(tx) != xymap.end() && xymap[tx].count(y)){
                            break;
                        }
                        x = tx;                        
                    }
                    ans = max(ans, edist(x,y));
                }else if(dir == 2){
                    //down
                    for(int i = 1; i <= k; i++){
                        int ty = y - 1;
                        if((xymap.find(x) != xymap.end()) && xymap[x].count(ty)){
                            break;
                        }
                        y = ty;                        
                    }
                    ans = max(ans, edist(x,y));
                }else if(dir == 3){
                    //left
                    for(int i = 1; i <= k; i++){
                        int tx = x - 1;
                        if(xymap.find(tx) != xymap.end() && xymap[tx].count(y)){
                            break;
                        }
                        x = tx;                        
                    }
                    ans = max(ans, edist(x,y));
                }
            }
        }

        return ans;
    }
};