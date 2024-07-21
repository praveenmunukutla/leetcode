class Solution {
    priority_queue<int> mheap;
    unordered_map<int, string> umap;
    vector<string> ans;
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        for(auto s : score)
            mheap.push(s);
        
        int count = 1;
        while(!mheap.empty()){
            int val = mheap.top();mheap.pop();

            if(count == 1)
                umap[val] = "Gold Medal";
            else if(count == 2)
                umap[val] = "Silver Medal";
            else if(count == 3)
                umap[val] = "Bronze Medal";
            else
                umap[val] = to_string(count);

            count++;
        }

        for(auto s : score){
            ans.push_back(umap[s]);
        }

        return ans;
    }
};