class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> umap;  // HashMap to store the frequency of digit sums
        
        // Calculate the sum of digits for each number from 1 to n
        for (int i = 1; i <= n; i++) {
            int sum = 0;
            int tval = i;
            
            // Calculate the sum of the digits of the current number
            while (tval) {
                sum += tval % 10;
                tval = tval / 10;
            }
            
            // Increment the frequency of the digit sum in the map
            umap[sum]++;
        }

        int largestSize = 0;        // Variable to track the largest group size
        int largestSizeCount = 0;   // Variable to count how many groups have the largest size

        // Iterate through the map to find the largest group size and count them
        for (auto u : umap) {
            if (u.second > largestSize) {
                largestSize = u.second;      // Update the largest group size
                largestSizeCount = 1;        // Reset the count to 1
            } else if (u.second == largestSize) {
                largestSizeCount++;          // Increment the count if another group has the largest size
            }
        }

        return largestSizeCount;  // Return the count of groups with the largest size
    }
};
