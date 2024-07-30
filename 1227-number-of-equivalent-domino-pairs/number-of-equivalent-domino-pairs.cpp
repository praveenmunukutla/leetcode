#include <vector>
#include <unordered_map>

class Solution {
    std::unordered_map<int, int> umap;
public:
    int numEquivDominoPairs(std::vector<std::vector<int>>& dominoes) {
        // Iterate through each domino
        for (auto d : dominoes) {
            int sum = min(d[0],d[1])*10+max(d[0],d[1]);
            umap[sum]++;
        }

        int count = 0; // Initialize a counter for equivalent domino pairs
        // Iterate through the unordered_map
        for (auto u : umap) {
            count += (u.second * (u.second-1)) / 2;
        }

        return count; // Return the total count of equivalent domino pairs
    }
};
