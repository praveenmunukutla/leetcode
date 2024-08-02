class Solution {
    // Unordered set to keep track of characters encountered
    unordered_set<char> uset;
    // Unordered set to keep track of characters already counted as special
    unordered_set<char> counted;
public:
    int numberOfSpecialChars(string word) {
        int count = 0; // Counter for the number of special characters
        
        // Iterate through each character in the word
        for(auto c : word){
            char tc = c; // Store the original character
            
            // Check if the character is uppercase
            if(isupper(c)){
                // Convert to lowercase
                c = tolower(c);
                // Check if the lowercase version is in the uset and hasn't been counted yet
                if(uset.count(c) && !counted.count(c)) {
                    // Mark both lowercase and original uppercase characters as counted
                    counted.insert(c);
                    counted.insert(tc);
                    count++; // Increment the special character count
                }
            }
            // Check if the character is lowercase
            else if(islower(c)){
                // Convert to uppercase
                c = toupper(c);
                // Check if the uppercase version is in the uset and hasn't been counted yet
                if(uset.count(c) && !counted.count(c)) {
                    // Mark both uppercase and original lowercase characters as counted
                    counted.insert(c);
                    counted.insert(tc);
                    count++; // Increment the special character count
                }
            }
            // Add the original character to the uset
            uset.insert(tc);
        }
        
        // Return the count of special characters
        return count;
    }
};
