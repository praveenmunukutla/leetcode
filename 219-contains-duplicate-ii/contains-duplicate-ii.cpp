class Solution {
    // An unordered map to store the latest index of each number
    unordered_map<int, int> umap;

public:
    // Function to check if there are two indices i and j such that:
    // nums[i] == nums[j] and the absolute difference between i and j is at most k
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // Iterate through each element in the vector
        for(int i = 0; i < nums.size(); i++){
            // Get the current number
            int n = nums[i];
            
            // Check if the number is already in the map
            if(umap.find(n) == umap.end()){
                // If not, add it with its index as the value
                umap[n] = i;
            } else {
                // If it is, calculate the difference between current index and the stored index
                int diff = abs(i - umap[n]);
                
                // Check if the difference is within the allowed range k
                if(diff <= k) 
                    return true; // If so, return true indicating a nearby duplicate exists
                
                // Update the stored index to the current index
                umap[n] = i;
            }
        }

        // If no nearby duplicate is found, return false
        return false;        
    }
};
