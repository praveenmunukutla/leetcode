class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;

        unsigned long long int reverse = 0;
        int cx = x;
        while(x){
            int d = x%10;
            

            reverse = reverse*10+d;
            x = x/10;
        }

        return cx == reverse;
    }
};