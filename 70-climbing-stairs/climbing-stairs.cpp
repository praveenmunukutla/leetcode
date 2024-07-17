class Solution {
    // Vector to cache the results of subproblems
    vector<int> cache;
public:
    // Constructor to initialize the cache with -1
    Solution() : cache(46, -1) {}

    // Function to calculate the number of ways to climb n stairs
    int climbStairs(int n) {
        // Base cases
        if (n == 0) return 1; // 1 way to stay on the ground (do nothing)
        if (n < 0) return 0;  // No way to climb negative steps
        
        // If the result is already cached, return it
        if (cache[n] != -1) return cache[n];

        // Calculate the result and store it in the cache
        cache[n] = climbStairs(n - 1) + climbStairs(n - 2);

        // Return the cached result
        return cache[n];
    }
};
