class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int count = 0;

        // Initialize an unordered_set with prime numbers up to 31
        std::unordered_set<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

        // Create a cache to store the number of set bits for numbers up to 'right'
        std::vector<int> cache(right + 5, 0); // Extra space to avoid out-of-bound issues
        
        // Fill the cache with the number of set bits for each number
        for (int i = 1; i <= right; i++) {
            cache[i] = cache[i / 2] + (i & 1); // Using bitwise operations to count set bits
        }

        // Count how many numbers in the range [left, right] have a prime number of set bits
        for (int i = left; i <= right; i++) {
            if (primes.find(cache[i]) != primes.end()) {
                count++; // Increment count if the number of set bits is prime
            }
        }

        return count; // Return the total count of numbers with a prime number of set bits
    }
};
