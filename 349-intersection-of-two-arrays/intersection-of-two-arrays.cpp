class Solution {
    unordered_set<int> set;
    unordered_set<int> res;
    vector<int> rres;
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();

        vector<int>& minv = len1 < len2 ? nums1 : nums2;
        vector<int>& checkv = len1 < len2 ? nums2 : nums1;

        for(auto n : minv)
            set.insert(n);
        

        for(auto n : checkv){
            if(set.find(n) != set.end()){
                res.insert(n);
            }
        }

        rres.assign(res.begin(), res.end());
        return rres;
    }
};