class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        auto s = accumulate(apple.begin(), apple.end(), 0);
        priority_queue<int> q(capacity.begin(), capacity.end());
        int count = 0;

        while(!q.empty()){
            auto v = q.top(); q.pop();
            s = s - v;
            count++;

            if(s <= 0) break;
        }

        return count;
    }
};