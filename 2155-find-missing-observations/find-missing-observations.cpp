class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int sum = 0;
        for(auto r : rolls) sum += r;
        int missSum = (m+n)*mean - sum;
        if(missSum > n*6 || missSum < n) return {};
        
        int q = missSum/n; int r = missSum%n;
        vector<int> res(n, q);
        fill(res.begin(), res.begin()+r, q+1);
        return res;        
    }
};