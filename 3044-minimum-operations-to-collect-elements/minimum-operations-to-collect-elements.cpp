class Solution {
    unordered_set<int> uset; // Unordered set to keep track of unique numbers from 1 to k
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0; // Counter to keep track of operations
        for(int i = nums.size()-1; i >= 0; i--){ // Iterate from the end of the array to the beginning
            if(uset.size() == k) return count; // If the set contains all numbers from 1 to k, return the count
            if(nums[i] <= k) { // If the current number is less than or equal to k
                uset.insert(nums[i]); // Add the number to the set
            }
            count++; // Increment the operation count
        }
        return count; // Return the total number of operations if the set size never reaches k
    }
};
