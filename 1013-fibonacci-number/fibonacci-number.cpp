class Solution {
    vector<int> cache;
public:
    Solution():cache(vector<int>(35,-1)){}
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        if(cache[n] != -1) return cache[n];

        return cache[n] = fib(n-1)+fib(n-2);
    }
};