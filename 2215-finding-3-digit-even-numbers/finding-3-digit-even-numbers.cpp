#include <vector>
#include <set>
#include <algorithm>

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int> uniqueNumbers; // Use a set to store unique numbers
        int len = digits.size();

        // Iterate over all permutations of 3 digits
        for (int i = 0; i < len; i++) {
            if (digits[i] == 0) continue; // Skip if the digit is 0 (can't be the first digit)
            for (int j = 0; j < len; j++) {
                if (i == j) continue; // Skip if the indices are the same
                for (int k = 0; k < len; k++) {
                    if (k == i || k == j) continue; // Skip if indices match
                    if (digits[k] % 2 == 0) { // Check if the last digit is even
                        int number = digits[i] * 100 + digits[j] * 10 + digits[k];
                        uniqueNumbers.insert(number); // Insert into set
                    }
                }
            }
        }

        vector<int> res(uniqueNumbers.begin(), uniqueNumbers.end()); // Convert set to vector
        return res;        
    }
};
