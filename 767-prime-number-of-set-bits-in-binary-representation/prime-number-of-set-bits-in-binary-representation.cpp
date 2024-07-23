class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int count = 0;

        std::unordered_set<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        vector<int> cache = vector<int>(right+5, 0);
        for(int i = 1; i <= right; i++){
            cache[i] = cache[i/2]+(i&1);
        }

        for(int i = left; i <= right; i++){
            if(primes.find(cache[i]) != primes.end()) count++;
        }

        return count;
    }
};