#include <vector>
#include <unordered_map>

class Solution {
    // Define an unordered_map where the key is an int and the value is a vector of vectors of ints
    std::unordered_map<int, std::vector<std::vector<int>>> umap;
public:
      int speed = []() {
        ios::sync_with_stdio(false); // Disable synchronization with C I/O 
        cin.tie(NULL); // Untie cin from cout 
        cout.tie(NULL); // Untie cout (though this is not necessary) 
        return 0; 
    }(); 

    int numEquivDominoPairs(std::vector<std::vector<int>>& dominoes) {
        // Iterate through each domino
        for (auto d : dominoes) {
            int sum = d[0] + d[1]; // Calculate the sum of the two numbers in the domino
            if (umap.find(sum) == umap.end()) 
                umap[sum] = std::vector<std::vector<int>>(); // Initialize the vector if the sum is not found
            umap[sum].push_back({d[0], d[1]}); // Add the domino to the vector corresponding to the sum
        }

        int count = 0; // Initialize a counter for equivalent domino pairs
        // Iterate through the unordered_map
        for (auto u : umap) {
            if (u.second.size() > 1) { // Only consider vectors with more than one domino
                std::vector<std::vector<int>> dom = u.second;
                int len = u.second.size();
                // Compare each pair of dominoes in the vector
                for (int i = 0; i < len; i++) {
                    for (int j = i + 1; j < len; j++) {
                        // Check if the dominoes are equivalent
                        if (dom[i][0] == dom[j][0] && dom[i][1] == dom[j][1]) count++;
                        else if (dom[i][0] == dom[j][1] && dom[i][1] == dom[j][0]) count++;
                    }
                }
            }
        }

        return count; // Return the total count of equivalent domino pairs
    }
};
