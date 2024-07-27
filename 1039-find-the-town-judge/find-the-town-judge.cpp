class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n == 1 && trust.size() == 0) return 1;
        
        unordered_map<int,vector<int>> map;
        for(auto tr: trust){
            int f = tr[0];
            int s = tr[1];

            if(map.find(s) == map.end()){
                //inward 1, outward 0
                map[s] = {1, 0};
            }else {
                map[s][0]++;
            }

            if(map.find(f) == map.end()){
                map[f] = {0,1};
            }else {
                map[f][1]++;
            }
        }

        for(auto u : map){
            if(u.second[0] == n-1 && u.second[1] == 0) return u.first;
        }

        return -1;
    }
};