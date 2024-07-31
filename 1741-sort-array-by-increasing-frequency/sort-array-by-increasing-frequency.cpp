class Solution {
    unordered_map<int, int> umap; // Unordered map to store the frequency of each number
public:
    vector<int> frequencySort(vector<int>& nums) {
        // Count the frequency of each number in the input vector
        for(auto n : nums) umap[n]++;
        
        // Sort the vector based on the custom comparator
        sort(nums.begin(), nums.end(), [&](auto& a, auto& b){
            // If two numbers have the same frequency, sort them in descending order
            if(umap[a] == umap[b]){
                return a > b;
            }
            // Otherwise, sort them based on frequency in ascending order
            return umap[a] < umap[b];
        });
        
        return nums; // Return the sorted vector
    }
};
