class Solution {
public:
    int countKeyChanges(string s) {
        // Convert the first character to lowercase and initialize 'prev' to it
        char prev = tolower(s[0]); 
        // Initialize count of key changes to 0
        int count = 0;

        // Iterate through the string starting from the second character
        for(int i = 1; i < s.length(); i++){
            // Convert the current character to lowercase and check if it differs from 'prev'
            if(tolower(s[i]) != prev) {
                // If different, increment the count of key changes
                count++;
            }
            // Update 'prev' to the current character (in lowercase)
            prev = tolower(s[i]);
        }

        // Return the total count of key changes
        return count;
    }
};
