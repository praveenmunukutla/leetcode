class Solution {
    vector<int> cache;
public:
    Solution():cache(vector<int>(40,0)){}
    int tribonacci(int n) {
        if(n <= 0) return 0;
        if(n == 1) return 1;
        if(cache[n]) return cache[n];
        return cache[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
    }
};