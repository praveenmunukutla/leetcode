class Solution {
    unordered_map<char, int> umap;  // To store the frequency of each character in 's'
public:
    bool buddyStrings(string s, string goal) {
        // Check if the lengths of the strings are different
        if (s.length() != goal.length()) return false;
        
        int count = 0;          // To count the number of positions where 's' and 'goal' differ
        int findex = -1;       // Index of the first differing position
        int sindex = -1;       // Index of the second differing position
        
        // Iterate through both strings to find differences and populate the frequency map
        for (int i = 0; s[i] != '\0'; i++) {
            umap[s[i]]++;  // Count occurrences of each character in 's'
            
            if (s[i] != goal[i]) {  // Check if characters at current position are different
                if (findex == -1) {
                    findex = i;  // Record the first differing index
                } else if (sindex == -1) {
                    sindex = i;  // Record the second differing index
                }
                count++;  // Increment the number of differing positions
            }
        }
        
        // If there are more than two differences, return false
        if (count > 2) return false;

        // If exactly two positions differ, check if swapping can make the strings equal
        if (count == 2) {
            swap(s[findex], s[sindex]);  // Swap the characters at the differing positions
            return s == goal;  // Check if the modified 's' equals 'goal'
        }

        // If there are no differences, check for duplicate characters in 's'
        if (count == 0) {
            for (auto a : s) {
                if (umap[a] >= 2) return true;  // If any character appears at least twice, return true
            }
        }

        return false;  // Return false if none of the above conditions are met
    }
};
