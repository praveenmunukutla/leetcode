class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        vector<int> ans;
        vector<int> seen;
        int index = -1;

        for (auto n : nums) {
            if (n == -1) {
                // Backtrack: Push the last seen integer or -1 if none available
                if (index < 0) ans.push_back(-1);
                else ans.push_back(seen[index--]);
            } else {
                // Store the current integer and update the index
                seen.push_back(n);
                index = seen.size() - 1;
            }
        }
        return ans;
    }
};