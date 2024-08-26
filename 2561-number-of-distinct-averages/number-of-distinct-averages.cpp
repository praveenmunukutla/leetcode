class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<double> ans; // Set to store unique averages
        sort(nums.begin(), nums.end()); // Sort the array to ensure pairs can be selected from both ends
        int i = 0, j = nums.size()-1; // Initialize two pointers at the start and end of the sorted array
        while(i < j) {
            // Calculate the average of the current pair and insert it into the set
            ans.insert(((nums[i]+nums[j])/2.0));
            i++; // Move the left pointer to the right
            j--; // Move the right pointer to the left
        }
        return ans.size(); // Return the count of distinct averages
    }
};
