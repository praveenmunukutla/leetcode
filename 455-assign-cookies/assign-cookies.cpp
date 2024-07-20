class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end()); // Sort children's greed factor
        sort(s.begin(), s.end()); // Sort cookies sizes
        
        int child = 0;
        int cookie = 0;
        
        // Iterate through cookies and children
        while (child < g.size() && cookie < s.size()) {
            if (s[cookie] >= g[child]) { // Cookie can satisfy the current child
                child++; // Move to the next child
            }
            cookie++; // Move to the next cookie
        }
        
        return child; // Number of content children
    }
};
