class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;

        unsigned long long int reverse = 0;
        int cx = x;
        while(x){
            int d = x%10;
            
            if(reverse > INT_MAX/10) return false;

            if(reverse == INT_MAX/10){
                if(d > INT_MAX%10) return false;
            }

            reverse = reverse*10+d;
            x = x/10;
        }

        return cx == reverse;
    }
};