class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int len = s.length();
        int count = 0;

        for(int i = 0; i < len; i++){
            int oc = 0, zc = 0;
            for(int j = i; j < len; j++){
                if(s[j] == '0') zc++;
                else if(s[j] == '1') oc++;
                if(oc <= k || zc <= k) {
                    count++;
                }
            }
        }

        return count;
    }
};
