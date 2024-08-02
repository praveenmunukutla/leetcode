class Solution {
public:
    string findLatestTime(string s) {
        // Reference to characters in the time string
        char& c0 = s[0];
        char& c1 = s[1];
        char& c3 = s[3];
        char& c4 = s[4];

        // Handle hours
        // Both hour digits are '?', set to maximum '11'
        if(c0 == '?' && c1 == '?') c0 = '1', c1 = '1';
        // First hour digit is '1', second is '?', set to '1'
        if(c0 == '1' && c1 == '?') c1 = '1';
        // First hour digit is '0', second is '?', set to '9'
        if(c0 == '0' && c1 == '?') c1 = '9';
        // First hour digit is '?', second is '1', set to '1'
        if(c0 == '?' && c1 == '1') c0 = '1';
        // First hour digit is '?', second is '0', set to '1'
        if(c0 == '?' && c1 == '0') c0 = '1';
        // First hour digit is '?', second is between '2' and '9', set to '0'
        if(c0 == '?' && c1 > '1' && c1 <= '9') c0 = '0';
        
        // Handle minutes
        // Both minute digits are '?', set to maximum '59'
        if(c3 == '?' && c4 == '?') c3 = '5', c4 = '9';
        // First minute digit is not '?', second is '?', set to '9'
        if(c3 != '?' && c4 == '?') c4 = '9';
        // First minute digit is '?', second is not '?', set to '5'
        if(c3 == '?' && c4 != '?') c3 = '5';
        
        return s;
    }
};
