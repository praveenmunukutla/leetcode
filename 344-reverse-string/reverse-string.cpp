class Solution {
public:
    // Function to reverse the characters in the vector s
    void reverseString(std::vector<char>& s) {
        int length = s.size();  // Get the size of the vector

        // Loop through the first half of the vector
        for (int i = 0; i < length / 2; i++) {
            // Swap the element at index i with the element at index length - i - 1
            std::swap(s[i], s[length - i - 1]);
        }        
    }
};
