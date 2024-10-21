class Solution {
public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int a : nums){
            freq[a]++;
        }

        priority_queue<pair<int, int>> maxHeap;
        for(auto it : freq){
            maxHeap.push({it.second, it.first});
        }

        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return ans;
    }
};