class Solution {
    unordered_map<int, int> umap;  // Unordered map to store the first occurrence of each number in the sorted array
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> cn = nums;  // Create a copy of the original nums array
        sort(nums.begin(), nums.end());  // Sort the nums array in ascending order
        
        // Populate the unordered map with the first occurrence of each number in the sorted array
        for (int i = 0; i < nums.size(); i++) {
            if (umap.find(nums[i]) == umap.end())
                umap[nums[i]] = i;
        }
        
        vector<int> ans;  // Vector to store the result
        // For each number in the original array, get the count of smaller numbers from the map
        for (auto n : cn)
            ans.push_back(umap[n]);

        return ans;  // Return the result
    }
};
