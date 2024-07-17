class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        int sum = 0;
        bool wstarted = false;
        
        // Traverse the string from the end
        for(int i = len-1; i >= 0; i--) {
            if(s[i] == ' ') {
                // Skip leading spaces or stop if a word has been counted
                if(!wstarted)
                    continue;
                return sum; // Return the length of the last word
            }

            wstarted = true; // Mark that a word has started
            sum++; // Increment the length of the last word
        }

        return sum; // Return the length of the last word (whole string case)
    }
};
