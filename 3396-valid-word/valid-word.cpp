class Solution {
    unordered_set<char> uset = {'a','e','i','o','u'}; // Set of vowels

public:
    // Function to check if the given word is valid based on certain criteria
    bool isValid(string word) {
        int len = word.length(); // Length of the word
        bool isalnumeric = true; // Flag to check if all characters are alphanumeric
        bool containsVowels = false; // Flag to check if the word contains vowels
        bool containsConsonant = false; // Flag to check if the word contains consonants

        // Iterate through each character in the word
        for (auto c : word) {
            c = tolower(c); // Convert character to lowercase for uniform comparison

            // Check if the character is not alphanumeric
            if (!isalnum(c)) {
                isalnumeric = false;
            } 
            // Check if the character is a vowel
            else if (uset.count(c)) {
                containsVowels = true;
            } 
            // Check if the character is a consonant
            else if (!isdigit(c) && isalnum(c) && uset.find(c) == uset.end()) {
                containsConsonant = true;
            }
        }
        
        // Return true if all conditions are met:
        // 1. Length of the word is at least 3
        // 2. All characters are alphanumeric
        // 3. The word contains at least one vowel
        // 4. The word contains at least one consonant
        return len >= 3 && isalnumeric && containsVowels && containsConsonant;
    }
};
