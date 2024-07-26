class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int rowcount = 0;
        int width = 0;
        for(auto c : s){
           int cwidth = widths[c-'a'];
           width += cwidth;
           if(width > 100) {
               width -= cwidth;
               rowcount++;
               width = cwidth;
           }
        }

        return {rowcount+1, width};
    }
};