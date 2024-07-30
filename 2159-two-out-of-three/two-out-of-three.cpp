class Solution {
    unordered_map<int, unordered_set<int>> umap; // Map to store each number and the sets it appears in
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        for(auto n : nums1) umap[n].insert(1); // Insert the set identifier 1 for elements in nums1
        for(auto n : nums2) umap[n].insert(2); // Insert the set identifier 2 for elements in nums2
        for(auto n : nums3) umap[n].insert(3); // Insert the set identifier 3 for elements in nums3

        vector<int> ans; // Vector to store the result
        for(auto u : umap) { // Iterate over the map
            if(u.second.size() >= 2) // If the number appears in at least two sets
                ans.push_back(u.first); // Add the number to the result
        }

        return ans; // Return the result vector
    }
};
