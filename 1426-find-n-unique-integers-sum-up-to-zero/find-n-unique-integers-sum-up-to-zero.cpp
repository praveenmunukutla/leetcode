class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        ans.reserve(n);

        for(int i = 1; i <= n/2; i++){
            ans.push_back(i);
            ans.push_back(i*-1);
        }

        if(n%2 == 1)
            ans.push_back(0);

        return ans;
    }
};