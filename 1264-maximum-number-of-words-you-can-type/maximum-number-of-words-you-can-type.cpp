class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count = 0;  // Initialize the count of words that can be typed
        unordered_set<char> uset(brokenLetters.begin(), brokenLetters.end());  // Store broken letters in a set for quick lookup
        bool considerWord = true;  // Flag to determine if the current word can be typed

        // Iterate through each character in the text
        for (auto t : text) {
            // Check if the current word can be typed and if the current character is a broken letter
            if (considerWord && uset.count(t)) {
                considerWord = false;  // Mark the current word as not typeable
                continue;  // Skip to the next character
            }

            // If the current character is a space, it marks the end of a word
            if (t == ' ') {
                if (considerWord) count++;  // If the word was typeable, increment the count
                considerWord = true;  // Reset the flag for the next word
            }
        }

        // After the loop, check if the last word was typeable
        if (considerWord) count++;

        return count;  // Return the total count of words that can be typed
    }
};
