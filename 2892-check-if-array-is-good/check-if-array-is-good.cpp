class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_map<int,int> umap; // Unordered map to store the frequency of each element in nums
        for(auto a : nums)
            umap[a]++; // Increment the frequency count for each element

        int size = nums.size()-1; // Calculate the size-1 of the nums vector
        for(int i = 1; i < size; i++){ // Loop through numbers from 1 to size-1
            if(umap[i] != 1) return false; // Check if each number from 1 to size-1 appears exactly once
        }

        if(umap[size] != 2) return false; // Check if the number equal to size appears exactly twice

        return true; // Return true if all conditions are met
    }
};
