class Solution {
public:
    std::string toHex(int num) {
        if (num == 0) return "0";  // Handle the special case for zero

        unsigned int n = static_cast<unsigned int>(num); // Convert to unsigned to handle negative numbers
        std::string hex = "0123456789abcdef";
        std::string ans;

        while (n > 0) {
            int d = n % 16; // Get the remainder (hex digit)
            ans.push_back(hex[d]); // Append the corresponding hex character
            n = n / 16; // Divide by 16 to process the next digit
        }
        
        std::reverse(ans.begin(), ans.end()); // Reverse the string as digits are collected in reverse order
        return ans;
    }
};
