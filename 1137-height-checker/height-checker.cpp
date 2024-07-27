class Solution {
public:
    int heightChecker(vector<int>& heights) {
        // Make a copy of the heights vector
        vector<int> ch = heights;
        
        // Sort the copy
        sort(ch.begin(), ch.end());
        
        int count = 0;
        
        // Compare each element of the original and sorted vectors
        for(int i = 0; i < heights.size(); i++){
            // If elements at the same position are different, increment the count
            if(heights[i] != ch[i]) count++;
        }
        
        // Return the number of mismatches
        return count;
    }
};
