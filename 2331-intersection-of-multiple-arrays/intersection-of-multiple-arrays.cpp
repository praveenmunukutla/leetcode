class Solution {
    unordered_map<int, vector<int>> umap; // Unordered map to store the indices of each number across all vectors
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int index = 0; // Index to track the current vector
        // Iterate through each vector in nums
        for(auto n : nums){
            // Iterate through each number in the current vector
            for(auto n1 : n){
                umap[n1].push_back(index); // Store the index of the current vector in the map
            }
            index++;
        }

        vector<int> ans; // Vector to store the intersection result
        // Iterate through the map to find numbers that are present in all vectors
        for(auto u : umap){
            if(u.second.size() == nums.size()){ // Check if the number appears in all vectors
                ans.push_back(u.first);
            }
        }

        sort(ans.begin(), ans.end()); // Sort the result in ascending order
        return ans; // Return the sorted result
    }
};
