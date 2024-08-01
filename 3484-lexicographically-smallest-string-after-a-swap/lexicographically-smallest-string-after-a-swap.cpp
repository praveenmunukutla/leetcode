class Solution {
public:
    string getSmallestString(string s) {
        int len = s.length();  // Get the length of the input string
        
        // Iterate through each character in the string except the last one
        for(int i = 0; i < len - 1; i++){
            int fi = s[i] - '0';  // Convert the current character to an integer
            int se = s[i + 1] - '0';  // Convert the next character to an integer

            // Check if both characters are odd
            if((fi % 2 == 1) && (se % 2 == 1)){
                // If the first character is greater than the second, swap them
                if(fi > se){
                    swap(s[i], s[i + 1]);
                    return s;  // Return the modified string
                }
            }
            // Check if both characters are even
            else if((fi % 2 == 0) && (se % 2 == 0)) {
                // If the first character is greater than the second, swap them
                if(fi > se){
                    swap(s[i], s[i + 1]);
                    return s;  // Return the modified string
                }
            }
        }
        
        return s;  // Return the original string if no swaps were made
    }
};
