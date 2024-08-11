class Solution {
public:
    int countAsterisks(string s) {
        int len = s.length();  // Get the length of the string
        bool start = false;    // Flag to track if we are between '|' pairs
        int count = 0;         // Counter for asterisks outside '|' pairs

        // Iterate through the string
        for(int i = 0; i < len; i++) {
            if(s[i] == '|') {
                start = !start;  // Toggle the flag when encountering '|'
            } else {
                if(s[i] == '*' && !start) {
                    count++;  // Count asterisks only if not between '|' pairs
                }
            }
        }

        return count;  // Return the total count of valid asterisks
    }
};
