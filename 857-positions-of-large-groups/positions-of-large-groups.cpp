class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        // Vector to store the result, which will be a list of pairs of indices
        vector<vector<int>> ans;

        int len = s.length(); // Length of the input string
        int i = 0; // Starting index for the current group of characters

        // Loop through the string until the end is reached
        while (i < len) {
            char ch = s[i]; // Current character
            int start = i; // Starting index of the current group
            int j = i + 1, count = 1; // Initialize j to the next character and count to 1

            // Continue to the next characters while they are the same as the current character
            while (j < len && s[j] == ch) {
                j++;
                count++;
            }

            // If the group length is 3 or more, add the start and end indices to the result
            if (count >= 3)
                ans.push_back({start, j - 1});

            i = j; // Move to the next new character
        }

        return ans; // Return the list of large group positions
    }
};
