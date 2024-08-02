class Solution {
public:
    string findLatestTime(string s) {
        char& c0 = s[0];
        char& c1 = s[1];
        char& c3 = s[3];
        char& c4 = s[4];

        if(c0 == '?' && c1 ==  '?') c0 = '1', c1 = '1';
        if(c0 == '1' && c1 ==  '?') c1 = '1';
        if(c0 == '0' && c1 ==  '?') c1 = '9';
        
        if(c0 == '?' && c1 ==  '1') c0 = '1';
        if(c0 == '?' && c1 ==  '0') c0 = '1';
        if(c0 == '?' && c1 >  '1' && c1 <= '9') c0 = '0';
        
        
        if(c3 == '?' && c4 ==  '?') c3 = '5', c4 = '9';
        if(c3 != '?' && c4 ==  '?') c4 = '9';
        if(c3 == '?' && c4 !=  '?') c3 = '5';
        
        return s;
    }
};