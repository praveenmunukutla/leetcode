class Solution {
    unordered_map<int, tuple<int,int,int>> umap; // Map to store frequency, first index, and second index of each number.
public:
    int findShortestSubArray(vector<int>& nums) {
        // Iterate through the nums vector.
        for(int i = 0; i < nums.size(); i++){
            // If the number is not in the map, initialize its tuple with frequency 1, first index i, and second index -1.
            if(umap.find(nums[i]) == umap.end()){
                umap[nums[i]] = {1, i, -1}; // New entry: {frequency, first index, -1}
            } else {
                // If the number is already in the map, update its frequency and the second index.
                auto& [f, fi, si] = umap[nums[i]]; // Access and update the tuple.
                f++;  // Increment the frequency.
                si = i; // Update the second index to the current index.
            }
        }
        
        int minSub = INT_MAX; // Variable to store the minimum length of the subarray.
        int maxFreq = INT_MIN; // Variable to store the maximum frequency found.

        // Iterate through the map to find the minimum subarray length with the highest frequency.
        for(auto u : umap){
            auto [f, fi, si] = u.second; // Unpack the tuple.
            // Calculate the size of the subarray. If second index is -1, it's a single occurrence.
            auto sasize = si == -1 ? f : si - fi + 1;
            if(f > maxFreq){
                // If the current frequency is greater than maxFreq, reset minSub and update maxFreq.
                minSub = INT_MAX; 
                minSub = min(minSub, sasize); // Update minSub with the current subarray size.
                maxFreq = max(maxFreq, f); // Update maxFreq to the current frequency.
            } else if(f == maxFreq){
                // If the frequency equals maxFreq, update minSub to the smallest subarray size.
                minSub = min(minSub, sasize);
            }
        }
        
        return minSub; // Return the minimum length of the subarray with the maximum frequency.
    }
};
