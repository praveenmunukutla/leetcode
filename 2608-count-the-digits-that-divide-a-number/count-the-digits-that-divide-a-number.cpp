class Solution {
public:
    int countDigits(int num) {
        int tnum = num;
        int count = 0;
        while(num){
            int d = num % 10;
            if(tnum % d == 0) count++;
            num = num/10;
        }
        return count;
    }
};