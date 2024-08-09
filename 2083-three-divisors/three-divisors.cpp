class Solution {
public:
    bool isThree(int n) {
        int count  = 0;
        for(int i = 1; i * i <= n; i++){
            if(n % i == 0 && i*i == n) count++;
            else if(n % i == 0) count+=2;
        }
        return count == 3;
    }
};