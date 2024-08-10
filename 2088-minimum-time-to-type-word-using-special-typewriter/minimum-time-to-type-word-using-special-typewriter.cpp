class Solution {
public:
    int minTimeToType(string word) {
        int ans = 0;  // Initialize the total time taken
        int start = (int)'a';  // Start at the letter 'a' on the typewriter

        // Iterate through each character in the word
        for(auto w : word){
            int curr = (int)w;  // Get the ASCII value of the current character

            // Calculate the minimum distance between the current position and the target character
            // The distance can be direct or through wrapping around the circular typewriter
            ans += min(abs(start-curr), 26 - abs(start-curr));

            start = curr;  // Update the current position to the new character
        }

        // Add the length of the word to account for the time taken to type each character
        return ans + word.length();
    }
};
