class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& c) {
        int count = 0;
        int len = c.size();

        // Iterate through each index in the vector
        for(int i = 0; i < len; i++) {
            // Calculate the indices for the next two elements
            int s = (i + 1) % len;
            int t = (i + 2) % len;

            // Check for alternating groups of [0, 1, 0] or [1, 0, 1]
            if (c[i] == 0 && c[s] == 1 && c[t] == 0) count++;
            else if (c[i] == 1 && c[s] == 0 && c[t] == 1) count++;
        }
        
        return count;
    }
};
