class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        // Create a min-heap (priority queue) from the input vector
        priority_queue<int, vector<int>, greater<int>> minpq(nums.begin(), nums.end());

        int count = 0; // Initialize operation counter

        // While the smallest element in the heap is less than k
        while(minpq.top() < k) {
            minpq.pop(); // Remove the smallest element
            count++; // Increment the operation counter
        }

        return count; // Return the number of operations performed
    }
};
