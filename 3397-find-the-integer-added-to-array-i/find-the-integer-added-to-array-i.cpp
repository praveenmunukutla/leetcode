class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int sum1 = 0, sum2 = 0, diff, ans;
        for(auto n : nums1) sum1 += n;
        for(auto n : nums2) sum2 += n;
        if(sum1 > sum2){
            //negative number added
            diff = sum1 - sum2;
            ans = diff/nums1.size();
            ans = ans*-1;
        }else if(sum1 < sum2){
            //positve number added
            diff = sum2 - sum1;
            ans = diff/nums1.size();
        }
        return ans;
    }
};