class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans; // Vector to store indices of words containing the character 'x'
        int index = 0; // Initialize index to track the position of each word
        
        for(auto w : words) { // Iterate over each word in the list
            for(auto c : w) { // Check each character in the current word
                if(c == x) { // If the character matches 'x'
                    ans.push_back(index); // Add the index of the word to the result
                    break; // Stop checking further characters in this word
                }
            }
            index++; // Move to the next word
        }
        
        return ans; // Return the list of indices
    }
};
