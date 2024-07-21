class Solution {
    unordered_map<char, int> key; // Map to store the row number for each character
    vector<string> ans; // Vector to store the final list of words that can be typed using one row
public:
    vector<string> findWords(vector<string>& words) {
        // Strings representing each row of the keyboard
        string one = "qwertyuiop";
        string two = "asdfghjkl";
        string three = "zxcvbnm";

        // Assign each character in the rows a corresponding row number in the map
        for (auto c : one) key[c] = 1;
        for (auto c : two) key[c] = 2;
        for (auto c : three) key[c] = 3;

        // Iterate through each word in the input list
        for (auto w : words) {
            // Get the row number of the first character in the word
            int k = key[tolower(w[0])];
            int i;
            
            // Check if all characters in the word belong to the same row
            for (i = 1; i < w.length(); i++) {
                if (key[tolower(w[i])] != k) break;
            }

            // If the word is valid (all characters in the same row), add it to the result list
            if (i == w.length()) ans.push_back(w);
        }
        
        return ans; // Return the list of valid words
    }
};
