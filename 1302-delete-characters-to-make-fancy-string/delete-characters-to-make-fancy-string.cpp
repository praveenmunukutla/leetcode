class Solution {
public:
    string makeFancyString(string s) {
        int len = s.length();  // Get the length of the input string
        string ans = "";  // Initialize the result string

        // Iterate through the input string
        for(int i = 0; i < len; ){
            char curr = s[i];  // Get the current character
            int count = 1;  // Initialize the count of consecutive characters
            int j = i + 1;  // Start checking from the next character

            // Count how many times the current character repeats consecutively
            while(j < len){
                if(s[j] == s[i]) count++;  // Increment count if the next character is the same
                else break;  // Stop counting if the next character is different
                j++;  // Move to the next character
            }

            // If the character repeats two or more times, add it twice to the result
            // aaa = aa
            // aaaa = aa
            // aaaaa = aa
            // aaaaaa = aa
            if(count >= 2) {
                ans += curr;
                ans += curr;
            } 
            // If the character does not repeat or repeats only once, add it once
            else ans += curr;

            i = j;  // Move the index `i` to the next new character
        }

        return ans;  // Return the resulting "fancy" string
    }
};
