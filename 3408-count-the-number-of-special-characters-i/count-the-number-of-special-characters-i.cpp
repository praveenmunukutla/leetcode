#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <cctype> // for tolower

using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        // Create an unordered_set to store unique characters from the word
        unordered_set<char> uset(word.begin(), word.end());
        
        // Create an unordered_map to count the occurrences of each lowercase character
        unordered_map<char, int> umap;

        // Iterate through each character in the unordered_set
        for (auto w : uset) {
            // Convert the character to lowercase
            char wt = tolower(w);
            // Increment the count of the lowercase character in the unordered_map
            umap[wt]++;
        }

        // Initialize a counter for special characters
        int count = 0;

        // Iterate through each entry in the unordered_map
        for (auto u : umap) {
            // Check if the character occurs exactly twice
            if (u.second == 2) {
                count++; // Increment the special character count
            }
        }
        
        // Return the total count of special characters
        return count;
    }
};
