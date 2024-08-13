class Solution {
    unordered_map<int, int> umap;
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int i, j;
        for(i = 0; i < nums2.size(); i++){
            int val = nums2[i];
            for(j = i+1; j < nums2.size(); j++){
                if(nums2[j]>val){
                    umap[val]=nums2[j];
                    break;
                }
            }
            if(j >= nums2.size()) umap[val] = -1;
        }

        vector<int> ans;
        for(auto n : nums1){
            ans.push_back(umap[n]);
        }
        return ans;
    }
};