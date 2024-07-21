class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        int fb = n & 1;
        n = n >> 1;

        while(n > 0){
            int sb = n & 1;

            if(sb == fb) return false;

            fb = sb;

            n = n >> 1;
        }

        return true;
    }
};