class Solution {
public:
    int commonFactors(int a, int b) {
        vector<int> ans;
        int maxn = max(a,b);
        for(int i = 1; i <= maxn; i++){
            if(a % i == 0 && b % i == 0) ans.push_back(i);
        }
        return ans.size();
    }
};