class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& c) {
        int count = 0, len = c.size();
        int f , s, t;
        for(int i = 0; i < len; i++){
            f = i;
            s = (i+1)%len;
            t = (i+2)%len;
            if(c[f]==0 && c[s]==1 && c[t] == 0) count++;
            else if(c[f]==1 && c[s]==0 && c[t] == 1) count++;
        }
        return count;
    }
};