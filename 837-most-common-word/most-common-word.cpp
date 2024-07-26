class Solution {
    unordered_map<string, int> umap; // Frequency map for words
    unordered_set<string> uset;       // Set of banned words
    
public:
    // Tokenizes the input string by splitting on spaces
    vector<string> getTokens(string s) {
        stringstream ss(s); // Create a stringstream from the input string
        vector<string> ans; // Vector to store tokens
        string token;
        while (getline(ss, token, ' ')) { // Split by spaces
            if (!token.empty()) ans.push_back(token); // Add non-empty tokens
        }
        return ans;
    }

    // Finds the most common word in the paragraph that is not banned
    string mostCommonWord(string paragraph, vector<string>& banned) {
        uset.insert(banned.begin(), banned.end()); // Insert banned words into the set

        // Convert paragraph to lowercase and replace non-alphanumeric characters with spaces
        std::transform(paragraph.begin(), paragraph.end(), paragraph.begin(),
                       [](unsigned char c) {
                           return std::isalnum(c) ? std::tolower(c) : ' ';
                       });

        auto tokens = getTokens(paragraph); // Get tokens from the transformed paragraph

        // Count the frequency of each word that is not banned
        for (const auto& t : tokens) {
            if (!uset.count(t)) {
                umap[t]++;
            }
        }

        // Find the word with the highest frequency
        int maxCount = 0;
        string mostCommonWord;
        for (const auto& u : umap) {
            if (u.second > maxCount) {
                mostCommonWord = u.first;
                maxCount = u.second;
            }
        }

        return mostCommonWord; // Return the most common word
    }
};