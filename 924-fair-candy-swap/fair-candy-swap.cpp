#include <vector>
#include <unordered_set>
#include <numeric>

using namespace std;

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        // Create a hash set from Bob's candy sizes for quick lookup
        unordered_set<int> bobs(bobSizes.begin(), bobSizes.end());

        // Calculate the total amount of candy Alice and Bob have
        auto as = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        auto bs = accumulate(bobSizes.begin(), bobSizes.end(), 0);

        // Compute the difference between the total candy amounts and divide by 2
        // This is the target difference we need to find between the candies to swap
        auto delta = (bs - as) / 2;

        // Iterate through each candy size Alice has
        for (auto a : aliceSizes) {
            // Check if there is a candy in Bob's collection that would balance the totals
            if (bobs.count(a + delta)) {
                // Return the pair of candies to swap: Alice's candy `a` and Bob's candy `a + delta`
                return {a, a + delta};
            }
        }

        // If no valid swap is found (should not happen as per problem guarantees)
        return {0, 0};
    }
};
