class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        ans.reserve(n); // Reserve space for n elements

        for(int i = 1; i <= n / 2; i++) {
            ans.push_back(i);     // Add positive number
            ans.push_back(-i);    // Add negative counterpart
        }

        if(n % 2 == 1) {
            ans.push_back(0);    // Add 0 if n is odd
        }

        return ans;
    }
};
