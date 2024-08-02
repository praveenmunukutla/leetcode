#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Function to find the minimum average of pairs from the sorted vector
    double minimumAverage(vector<int>& nums) {
        // Sort the vector in ascending order
        sort(nums.begin(), nums.end());

        int len = nums.size();
        double minAvg = 0;  // Initialize minAvg to 0

        // Loop through the first half of the vector
        for(int i = 0; i <= len / 2; i++) {
            // Calculate the average of the current pair
            double avg = (nums[i] + nums[len - i - 1]) / 2.0;

            // Update minAvg if the current average is smaller
            if(minAvg == 0 || avg < minAvg) minAvg = avg;
        }

        // Return the minimum average found
        return minAvg;
    }
};
