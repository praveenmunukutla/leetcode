class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // Check if concatenation of the strings in both orders results in the same string
        if (str1 + str2 != str2 + str1) return "";  // If not, return an empty string
        
        // Calculate the GCD of the lengths of the two strings
        auto g = gcd(str1.length(), str2.length());
        
        // Return the substring of str2 that corresponds to the GCD length
        return str2.substr(0, g);
    }

    // Helper function to calculate GCD using the Euclidean algorithm
    int gcd(int a, int b) {
        if (a == 0) return b;
        return gcd(b % a, a);
    }
};
