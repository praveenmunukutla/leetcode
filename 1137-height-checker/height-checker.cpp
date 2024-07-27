class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ch = heights;
        sort(ch.begin(), ch.end());
        int count = 0;
        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != ch[i]) count++;
        }
        return count;
    }
};