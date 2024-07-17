class Solution {
    vector<int> cache;
public:
    Solution():cache(46, -1) {}

    int climbStairs(int n) {
        if(n == 0) return 1;
        if(n < 0) return 0;
        if(cache[n] != -1) return cache[n];

        return cache[n] = climbStairs(n-1) + climbStairs(n-2);
    }
};