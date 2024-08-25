class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());
        int val1, val2;
        while(!pq.empty()){
            if(pq.size() == 1) break;
            val1 = pq.top();pq.pop();
            val2 = pq.top(); pq.pop();
            if(val1 != val2) {
                pq.push(abs(val1-val2));
            }
        }
        
        return pq.empty() ? 0 : pq.top();
    }
};