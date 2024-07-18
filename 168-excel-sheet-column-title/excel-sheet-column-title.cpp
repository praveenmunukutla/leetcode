class Solution {
public:
     int speed = []() {
        ios::sync_with_stdio(false); // Disable synchronization with C I/O 
        cin.tie(NULL); // Untie cin from cout 
        cout.tie(NULL); // Untie cout (though this is not necessary) 
        return 0; 
    }(); 

    string convertToTitle(int columnNumber) {
        string ans = "";
        while (columnNumber) {
            columnNumber--; // Adjust for 0-based indexing
            char col = 'A' + columnNumber % 26; // Find the corresponding character
            ans.insert(ans.begin(), col); // Insert the character at the beginning of the result string
            columnNumber = columnNumber / 26; // Move to the next digit
        }

        return ans; // Return the final result
    }
};
