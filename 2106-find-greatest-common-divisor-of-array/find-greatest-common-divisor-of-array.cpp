class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minN = INT_MAX;
        int maxN = INT_MIN;
        for(auto n : nums){
            minN = min(minN, n);
            maxN = max(maxN, n);
        }
        
        return gcd(minN, maxN);
    }

    int gcd(int a, int b){
        if(a == 0) return b;
        return gcd(b%a, a);
    }
};