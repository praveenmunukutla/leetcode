class Solution {
    string sc;  // Holds the input string for manipulation
    int slen;   // Stores the length of the input string

public:
    string reverseStr(string s, int k) {
        sc = s;           // Copy the input string to the class member
        slen = s.length(); // Determine the length of the input string
        bool reversestr = true;  // Flag to indicate whether to reverse the substring

        // Iterate over the string in steps of k
        for(int i = 0; i < slen; i = i + k){
            if(reversestr){
                reverse(i, i + k - 1);  // Reverse the substring if the flag is true
            }
            reversestr = !reversestr;   // Toggle the flag for the next iteration
        }

        return sc;  // Return the modified string
    }

private:
    void reverse(int i, int j){
        // Ensure j does not exceed the string length
        if(j > slen - 1)
            j = slen - 1;

        // Reverse the substring from index i to j
        while(i < j){
            char temp = sc[i];  // Swap characters at indices i and j
            sc[i] = sc[j];
            sc[j] = temp;
            i++;  // Move indices towards the center
            j--;
        }
    }
};
