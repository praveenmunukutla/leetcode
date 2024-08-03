class Solution {
    unordered_map<int, priority_queue<int>> umap; // Map to store priority queues of numbers by their max digit
public:
    int maxSum(vector<int>& nums) {
        // Fill the map with numbers grouped by their maximum digit
        for (auto n : nums) {
            int tn = n;
            int maxd = -1;
            while (tn) {
                int d = tn % 10;
                maxd = max(d, maxd);
                tn = tn / 10;
            }
            umap[maxd].push(n);
        }

        int maxsum = -1;
        // Find the maximum sum of pairs with the same maximum digit
        for (auto u : umap) {
            if (u.second.size() < 2) continue; // Skip if less than 2 elements
            int a = u.second.top(); u.second.pop(); // Get the largest number
            int b = u.second.top(); // Get the second largest number
            maxsum = max(maxsum, a + b); // Update maxsum if this pair is larger
        }

        return maxsum; // Return the result
    }
};
