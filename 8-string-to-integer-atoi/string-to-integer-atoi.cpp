#include <string>
#include <climits>
#include <cctype>

class Solution {
public:
    int myAtoi(std::string s) {
        int i = 0;
        int n = s.length();
        
        // Step 1: Trim leading whitespaces
        while (i < n && isspace(s[i])) {
            i++;
        }

        // Step 2: Handle optional sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Step 3: Convert valid digits to number
        long result = 0;  // Use long to handle overflow
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            
            // Step 4: Handle overflow
            if (result * sign > INT_MAX) {
                return INT_MAX;
            } else if (result * sign < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        // Step 5: Return the result with the correct sign
        return static_cast<int>(result * sign);
    }
};
