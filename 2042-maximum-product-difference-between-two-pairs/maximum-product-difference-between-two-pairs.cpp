class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        priority_queue<int> maxH(nums.begin(), nums.end());
        priority_queue<int, vector<int>, greater<>> minH(nums.begin(), nums.end());
        int a = maxH.top();maxH.pop();
        int b = maxH.top();maxH.pop();

        int c = minH.top();minH.pop();
        int d = minH.top();minH.pop();
        return ((a*b)-(c*d));
    }
};