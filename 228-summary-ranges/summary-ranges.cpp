class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size() == 0) return vector<string>{};

        vector<string> ans;
        int fnum = nums[0], pnum=nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == pnum+1){
                pnum = nums[i];
            }
            else {
                if(fnum == pnum){
                    ans.push_back(to_string(fnum));
                }else{
                    ans.push_back(to_string(fnum)+"->"+to_string(pnum));
                }
                fnum = nums[i];
                pnum = nums[i];
            }
        }

        if(fnum == pnum){
            ans.push_back(to_string(fnum));
        }else{
            ans.push_back(to_string(fnum)+"->"+to_string(pnum));
        }

        return ans;
    }
};