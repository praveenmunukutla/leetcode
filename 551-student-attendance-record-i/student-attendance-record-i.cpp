class Solution {
public:
    bool checkRecord(string s) {
        int A = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'A'){
                A++;
                if(A >= 2) return false;
            }
            else if(s[i] == 'L'){
                if(i >= 2 && s[i-1] == 'L' && s[i-2] == 'L'){
                    return false;
                }
            }
        }
        return true;
    }
};