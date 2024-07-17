class Solution {
public:
     int speed = []() {
        ios::sync_with_stdio(false); // Disable synchronization with C I/O 
        cin.tie(NULL); // Untie cin from cout 
        cout.tie(NULL); // Untie cout (though this is not necessary) 
        return 0; 
    }(); 

    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1; // Initialize two pointers: i starts from the beginning, j starts from the end

        while (i < j) { // Loop until i surpasses j (crosses the center of the string)
            while (i < j && !(isalnum(s[i]))) i++; // Move i to the next alphanumeric character from the beginning
            while (i < j && !(isalnum(s[j]))) j--; // Move j to the next alphanumeric character from the end

            if (tolower(s[i]) != tolower(s[j])) return false; // Compare characters at i and j (ignoring case); if they're not equal, it's not a palindrome

            i++, j--; // Move i forward and j backward to continue checking the next set of characters
        }

        return true; // If the loop completes without finding unequal characters, s is a palindrome
    }
};
