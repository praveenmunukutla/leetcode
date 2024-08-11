class Solution {
public:
    bool checkOnesSegment(string s) {
        int len = s.length();
        if(len == 1 && s[0] == '1') return true;
        
        bool hitZero = false;
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i] == '0') hitZero = true;
            if(hitZero && s[i] == '1') return false;
        }

        return true;
    }
};