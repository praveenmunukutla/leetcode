class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> umap;
        for(int i = 0; i < s.length(); i++) {
            // Check if the character has been seen before
            if(umap.find(s[i]) != umap.end()) {
                return s[i];  // First repeated character
            }
            umap[s[i]] = i;  // Store the index of the character
        }
        return ' ';  // Default return, although problem guarantees there is a repeated character
    }
};
