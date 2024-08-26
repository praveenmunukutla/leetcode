#include <vector>
#include <string>
#include <unordered_set>

class Solution {
public:
    int similarPairs(std::vector<std::string>& words) {
        int count = 0; // Initialize the count of similar pairs
        int len = words.size(); // Get the number of words in the list

        // Iterate over all pairs of words
        for(int i = 0; i < len; i++) {
            for(int j = i + 1; j < len; j++) {
                // Get the current pair of words
                auto& s1 = words[i];
                auto& s2 = words[j];

                // Convert each word to an unordered_set of characters
                std::unordered_set<char> sset1(s1.begin(), s1.end());
                std::unordered_set<char> sset2(s2.begin(), s2.end());

                // Check if the sets have identical characters
                if(sset1 == sset2) {
                    count++; // Increment the count if the sets are the same
                }
            }
        }

        return count; // Return the total count of similar pairs
    }
};
