class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        // Sort array using a custom comparator based on the number of 1-bits in binary representation
        sort(arr.begin(), arr.end(), [&](const auto& a, const auto& b) {
            auto ac = __builtin_popcount(a); // Count the number of 1-bits in 'a'
            auto bc = __builtin_popcount(b); // Count the number of 1-bits in 'b'

            if(ac == bc) {
                return a < b; // If both have the same number of 1-bits, sort by the value itself
            }

            return ac < bc; // Otherwise, sort by the number of 1-bits
        });

        return arr; // Return the sorted array
    }
};
