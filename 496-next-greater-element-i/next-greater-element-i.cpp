class Solution {
    unordered_map<int, int> umap;
    stack<int> sta;
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int i, j;
        for(i = 0; i < nums2.size(); i++){
            int val = nums2[i];
            while(!sta.empty() && sta.top() < val){
                umap[sta.top()] = val;
                sta.pop();
            }
            sta.push(val);
        }
        
        while(!sta.empty()){
            umap[sta.top()] = -1;
            sta.pop();
        }

        vector<int> ans;
        for(auto n : nums1){
            ans.push_back(umap[n]);
        }
        return ans;
    }
};