class Solution {
public:
    int maxPower(std::string s) {
        int len = s.length();  // Length of the input string
        int maxAns = 0;        // Initialize maximum power of consecutive characters

        for (int i = 0; i < len; ++i) {
            char ch = s[i];  // Current character
            int j = i + 1;   // Index to check consecutive characters
            int count = 1;   // Count of consecutive characters

            // Count consecutive characters
            while (j < len && s[j] == ch) {
                ++j;
                ++count;
            }

            // Move to the last checked index
            i = j - 1;

            // Update maximum power
            maxAns = std::max(maxAns, count);
        }

        return maxAns;  // Return the maximum power found
    }
};