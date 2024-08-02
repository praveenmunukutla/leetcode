class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minpq(nums.begin(), nums.end());

        int count = 0;
        while(minpq.top() < k){
            minpq.pop();
            count++;
        }

        return count;
    }
};