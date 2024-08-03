class Solution {
    unordered_map<int, priority_queue<int>> umap;
public:
    int maxSum(vector<int>& nums) {

        for(auto n : nums){
            int tn = n;
            int maxd = -1;
            while(tn){
                int d = tn % 10;
                maxd = max(d, maxd);
                tn = tn / 10;
            }
            umap[maxd].push(n);
        }
        
        int maxsum = -1;
        for(auto u : umap){
            if(u.second.size() < 2) continue;
            int a = u.second.top(); u.second.pop();
            int b = u.second.top();
            maxsum = max(maxsum, a+b);
        }

        return maxsum;
    }
};