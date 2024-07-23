class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        vector<int> cache = vector<int>(right+5, 0);
        for(int i = 1; i <= right; i++){
            cache[i] = cache[i/2]+(i&1);
        }

        for(int i = left; i <= right; i++){
            if(isPrime(cache[i])) count++;
        }

        return count;
    }

    bool isPrime(int val){
        if(val == 0 || val == 1) return false;
        if(val == 2) return true;
        for(int i = 2; i <= val/i; i++){
            if(val%i == 0) return false;
        }
        return true;
    }
};