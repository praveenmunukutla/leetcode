class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();

        // Add 1 to the last digit and handle carry
        digits[len - 1] += 1;
        int carry = digits[len - 1] / 10;
        digits[len - 1] %= 10;

        // Check if there's no carry after incrementing the last digit
        if (carry == 0) {
            return digits;
        }

        // Traverse from the second last digit to the first
        for (int i = len - 2; i >= 0; --i) {
            digits[i] += carry;
            carry = digits[i] / 10;
            digits[i] %= 10;

            // Return early if no further carry
            if (carry == 0) {
                return digits;
            }
        }

        // If there's still a carry left after all digits are processed, insert 1 at the beginning
        if (carry == 1) {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};
