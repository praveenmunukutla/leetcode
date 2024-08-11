class Solution {
public:
    int secondHighest(string s) {
        int fl = -1, sl = -1;  // Initialize first largest (fl) and second largest (sl) as -1
        
        for(auto c : s) {  // Iterate through each character in the string
            if(isdigit(c)) {  // Check if the character is a digit
                int val = c - '0';  // Convert the character to an integer value
                
                // Update the first and second largest values
                if(val > fl) {  
                    sl = fl;  // Update second largest to the previous first largest
                    fl = val;  // Update first largest to the current value
                } else if(val < fl && val > sl) {  // Update second largest if the current value is between first and second largest
                    sl = val;
                }
            }
        }
        
        return sl;  // Return the second largest digit found in the string
    }
};
