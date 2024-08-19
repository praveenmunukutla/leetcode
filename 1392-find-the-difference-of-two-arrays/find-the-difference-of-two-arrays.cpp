class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> res;
        unordered_set s1(nums1.begin(), nums1.end());
        unordered_set s2(nums2.begin(), nums2.end());
 
        unordered_set<int> res1;
        for(auto n : nums1){
            if(!s2.count(n)) res1.insert(n);
        }

        unordered_set<int> res2;
        for(auto n : nums2){
            if(!s1.count(n)) res2.insert(n);
        }

        res.push_back(vector<int>(res1.begin(), res1.end()));
        res.push_back(vector<int>(res2.begin(), res2.end()));
        return res;
    }
};