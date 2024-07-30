class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        // If the lengths of the strings are not equal, they cannot be almost equal
        if (s1.length() != s2.length()) return false;
        
        // Vector to store pairs of mismatched characters
        vector<pair<char, char>> pa;
        // Variables to keep track of the current index and the count of mismatches
        int i = 0, count = 0;
        
        // Loop through each character of the strings
        while (s1[i] != '\0') {
            // If characters at the same position are different
            if (s1[i] != s2[i]) {
                // Store the mismatched characters as pairs
                pa.push_back({s1[i], s2[i]});
                // Increment the count of mismatches
                count++;
            }
            i++;
        }

        // If there are no mismatches, the strings are already equal
        if (count == 0) return true;

        // If there is exactly one mismatch or more than two mismatches, return false
        if (count > 2 || count == 1) return false;

        // If there are exactly two mismatches, check if swapping can make the strings equal
        if (count == 2) {
            // Check if swapping the mismatched characters results in equality
            if (pa[0].first != pa[1].second || pa[0].second != pa[1].first) return false;
        }
         
        // If all conditions are met, return true
        return true;
    }
};
