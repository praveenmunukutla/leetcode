class Solution {
public:
    int reverse(long x) {
        int sign = x < 0 ? -1 : 1;
        if(sign == -1) x = -x;

        long result = 0;
        while(x){
            int d = x % 10;
            result = result*10+d;
            x = x/10;
        }

        if(result*sign > INT_MAX) return 0;
        if(result*sign < INT_MIN) return 0;
        return result*sign;
    }
};