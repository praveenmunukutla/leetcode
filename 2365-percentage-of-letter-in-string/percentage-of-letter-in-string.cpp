class Solution {
public:
    // Function to calculate the percentage of a specific letter in the string
    int percentageLetter(std::string s, char letter) {
        // Get the length of the input string
        int len = s.length();
        
        // Initialize a counter to count occurrences of the specified letter
        int count = 0;

        // Loop through each character in the string
        for(auto c : s) {
            // If the current character matches the specified letter, increment the count
            if(c == letter) 
                count++;
        }

        // Calculate the percentage of the specified letter in the string
        // Convert the count and length to double for accurate division
        // Multiply by 100 to get the percentage
        // Use floor to round down the result to the nearest integer
        return std::floor(((double)count / len) * 100);
    }
};
