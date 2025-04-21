class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 ) return false;

        int cx = x;
        long rev = 0;
        while(x){
            int d = x%10;
            rev = (rev*10) + d;
            if(rev > INT_MAX || rev < INT_MIN)
                return false;
            x = x/10;
        }

        return rev == cx;
    }
};