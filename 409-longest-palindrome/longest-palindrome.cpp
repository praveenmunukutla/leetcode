class Solution {
   unordered_map<char, int> umap;  // To store the frequency of each character in the string

public:
    int longestPalindrome(string s) {
        // Count the frequency of each character in the string
        for(auto c : s) umap[c]++;
        
        int ans = 0;  // To store the length of the longest palindrome
        bool hasOdds = false;  // Flag to check if there is at least one character with an odd frequency

        // Iterate through each character in the frequency map
        for(auto u : umap){
            if(u.second % 2 == 0) {
                // If the frequency is even, add it fully to the palindrome length
                ans += u.second;
            } else {
                // If the frequency is odd, add the largest even part (count - 1) to the palindrome length
                ans += u.second - 1;
                hasOdds = true;  // Mark that we have at least one character with an odd frequency
            }
        }
        
        // If there was at least one odd frequency, we can place one odd character in the center of the palindrome
        if(hasOdds)
            ans += 1;
        
        return ans;  // Return the length of the longest palindrome that can be built
    }
};
