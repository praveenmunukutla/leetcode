class Solution {
public:
    bool isThree(int n) {
        int count = 0;
        
        for(int i = 1; i * i <= n; i++) {
            if(n % i == 0) {
                count++;  // Count divisor `i`
                if(i != n / i) count++;  // Count the corresponding divisor `n / i`
            }
        }
        
        return count == 3;
    }
};
