#include <vector>
using namespace std;

class Solution {
public:
    // Function to determine the integer that was added to nums1 to make its sum equal to nums2's sum
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int sum1 = 0, sum2 = 0, diff = 0, ans = 0;

        // Calculate the sum of elements in nums1
        for (auto n : nums1) {
            sum1 += n;
        }

        // Calculate the sum of elements in nums2
        for (auto n : nums2) {
            sum2 += n;
        }

        // Determine the integer that needs to be added or subtracted
        if (sum1 > sum2) {
            // If sum1 is greater than sum2, a negative integer needs to be added to nums1
            diff = sum1 - sum2; // Compute the difference between the sums
            ans = diff / nums1.size(); // Compute the integer added to each element of nums1
            ans = ans * -1; // Convert to negative because nums1 needs to be reduced
        } else if (sum1 < sum2) {
            // If sum1 is less than sum2, a positive integer needs to be added to nums1
            diff = sum2 - sum1; // Compute the difference between the sums
            ans = diff / nums1.size(); // Compute the integer added to each element of nums1
        } // If sum1 == sum2, no integer needs to be added (ans remains 0)

        return ans; // Return the computed integer
    }
};
