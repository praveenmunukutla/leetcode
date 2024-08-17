class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int nlen = name.length(); // Length of the 'name' string
        int tlen = typed.length(); // Length of the 'typed' string

        int nindex = 0; // Pointer for 'name'
        int tindex = 0; // Pointer for 'typed'

        // Process characters from 'name' and 'typed'
        while (nindex < nlen) {
            char ch = name[nindex]; // Current character in 'name'
            char tch = typed[tindex]; // Current character in 'typed'

            // If characters do not match, it's not a long-pressed name
            if (ch != tch) return false;

            // Count consecutive characters in 'name'
            int count = 0;
            while (nindex < nlen && ch == name[nindex]) {
                count++;
                nindex++;
            }
            
            // Count consecutive characters in 'typed'
            int tcount = 0;
            while (tindex < tlen && ch == typed[tindex]) {
                tcount++;
                tindex++;
            }

            // If 'typed' has fewer characters than required, return false
            if (tcount < count) return false;
        }

        // If there are leftover characters in 'typed', return false
        if (tindex < tlen) return false;

        // All checks passed, return true
        return true;
    }
};
