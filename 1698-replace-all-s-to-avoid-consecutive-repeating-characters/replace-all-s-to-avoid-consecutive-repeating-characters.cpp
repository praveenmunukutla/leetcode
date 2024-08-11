class Solution {
public:
    // Replace '?' in the string so no two adjacent characters are the same.
    string modifyString(string s) {
        int len = s.length();  // Length of the string
        
        // Iterate over each character in the string
        for(int i = 0; i < len; i++){
            if(s[i] == '?'){  // Check if the character is '?'
                char pch = i > 0 ? s[i-1] : '$';  // Previous character or '$' if at start
                char nch = i < len-1 ? s[i+1] : '$';  // Next character or '$' if at end
                
                // Find a valid character to replace '?'
                for(int j = 0; j < 26; j++){
                   char cch = 'a' + j;  // Generate character 'a' to 'z'
                   if(cch != pch && cch != nch){  // Check if it’s different from adjacent chars
                       s[i] = cch;  // Replace '?' with this character
                       break;  // Stop searching once a valid char is found
                   }
                }
            }
        }

        return s;  // Return the modified string
    }
};
