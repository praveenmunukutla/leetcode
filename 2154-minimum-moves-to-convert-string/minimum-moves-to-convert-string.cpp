class Solution {
public:
    int minimumMoves(string s) {
        int len = s.length();
        int count = 0;
        for(int i = 0; i < len; i++){
            if(s[i] == 'O') continue;
            else{
                count++;
                i += 2;
            }
        }
        return count;
    }
};