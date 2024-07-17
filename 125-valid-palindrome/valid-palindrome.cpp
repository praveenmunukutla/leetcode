class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;

        while (i < j) {
            // Skip non-alphanumeric characters from the left
            while (i < j && !isalnum(s[i])) i++;
            // Skip non-alphanumeric characters from the right
            while (i < j && !isalnum(s[j])) j--;
            
            // Convert characters to lowercase if they are uppercase
            if (tolower(s[i]) != tolower(s[j])) return false;

            // Move to the next characters
            i++;
            j--;
        }

        return true;
    }
};