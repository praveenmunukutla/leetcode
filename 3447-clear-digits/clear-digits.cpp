class Solution {
public:
    // string clearDigits(string s) {
    //     string ans = "";
    //     for(auto c : s){
    //         if(isdigit(c)) ans.pop_back();
    //         else ans += c;
    //     }
    //     return ans;
    // }

    string clearDigits(string s) {
        int i = 0, j = 0;  // Initialize two pointers

        // Iterate through the string using pointer i
        while (s[i] != '\0') {
            // If the current character is not a digit, place it at position j
            if (!isdigit(s[i])) {
                s[j++] = s[i];  // Copy non-digit character to the current position of j
            } else {
                j--;  // Remove the last non-digit character by decrementing j
            }
            i++;  // Move to the next character
        }

        // Return the substring from the start to the last valid position
        return s.substr(0, j);
    }
};