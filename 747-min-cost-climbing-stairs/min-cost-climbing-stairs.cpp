class Solution {
    vector<int> ccost;
    vector<int> cache;
public:
    int minCostClimbingStairs(vector<int>& cost) {
        ccost = cost;
        int len = ccost.size();
        cache = vector<int>(len, -1);
        return min(util(len-1), util(len-2));
    }

    int util(int n){
        if(n < 0) return 0;

        if(n == 0 || n == 1)  return ccost[n];

        if(cache[n] != -1) return cache[n];

        return cache[n] = ccost[n]+min(util(n-1), util(n-2));
    }
};