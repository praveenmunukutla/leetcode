class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> umap;  // HashMap to store frequency of each element
        
        // Count the frequency of each element in the array
        for (auto a : arr) {
            umap[a]++;
        }
        
        int maxVal = -1;  // Initialize maxVal to -1 (default if no lucky number is found)
        
        // Traverse the map to find the largest lucky number
        for (auto u : umap) {
            if (u.first == u.second) {  // Check if the number equals its frequency
                maxVal = max(maxVal, u.first);  // Update maxVal if a larger lucky number is found
            }
        }
        
        return maxVal;  // Return the largest lucky number or -1 if none exists
    }
};
