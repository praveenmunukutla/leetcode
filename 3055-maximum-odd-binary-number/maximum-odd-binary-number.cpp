class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count = 0;
        
        // Count the number of '1's in the input string
        for (auto c : s) {
            if (c == '1') count++;
        }
        
        int len = s.length();
        int zcount = len - count; // Calculate the number of '0's
        
        // Create a string with (count-1) '1's followed by zcount '0's
        string ans = string(count - 1, '1');
        ans += string(zcount, '0');
        ans += '1'; // Append the final '1' to make the number odd
        
        return ans;
    }
};
