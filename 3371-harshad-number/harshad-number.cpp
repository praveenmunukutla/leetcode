class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
       int sum = 0;
       int tx = x;
       while(tx){
            int d = tx%10;
            sum += d;
            tx = tx/10;
       }

       return x%sum == 0 ? sum : -1;
    }
};