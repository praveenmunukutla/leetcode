class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> umap; // Map each character to its position in the alien order
        char ch = -128; // Placeholder for end of shorter word
        umap[ch] = -128; // Assign a special value for the placeholder

        // Fill the map with the alien order
        for(int i = 0; i < order.size(); i++) 
            umap[order[i]] = i;

        // Compare each pair of adjacent words
        for(int i = 1; i < words.size(); i++) {
            auto& w1 = words[i-1];
            auto& w2 = words[i];

            int len1 = w1.length();
            int len2 = w2.length();
            int maxLen = max(len1, len2);

            // Compare characters of the two words
            for(int j = 0; j < maxLen; j++) {
                char& c1 = j < len1 ? w1[j] : ch; // Use placeholder if w1 is shorter
                char& c2 = j < len2 ? w2[j] : ch; // Use placeholder if w2 is shorter

                if(umap[c1] == umap[c2]) continue; // Characters are equal, continue comparison
                if(umap[c1] > umap[c2]) return false; // w1 is greater, order is incorrect
                if(umap[c1] < umap[c2]) break; // w1 is smaller, order is correct
            }
        }

        return true; // All words are in the correct order
    }
};
