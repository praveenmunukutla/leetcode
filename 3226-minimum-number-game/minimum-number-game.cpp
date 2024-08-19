class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans;
        priority_queue<int,vector<int>, greater<int>> q(nums.begin(), nums.end());
        while(!q.empty()){
            int v1 = q.top();q.pop();
            int v2 = q.top();q.pop();
            ans.push_back(v2);
            ans.push_back(v1);
        }
        return ans;
    }
};