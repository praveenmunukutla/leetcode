class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set n1(nums1.begin(), nums1.end());
        unordered_set n2(nums2.begin(), nums2.end());
        int count1 = 0;
        for(auto n : nums1){
            if(n2.count(n)) count1++;
        }

        int count2 = 0;
        for(auto n : nums2){
            if(n1.count(n)) count2++;
        }

        return {count1, count2};
    }
};