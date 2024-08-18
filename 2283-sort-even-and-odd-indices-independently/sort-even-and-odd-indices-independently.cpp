class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        for(int i = 0; i < nums.size(); i++){
            (i%2 == 0) ? even.push_back(nums[i]) : odd.push_back(nums[i]);
        }


        sort(even.begin(), even.end(), [](auto& a, auto& b){
            return a < b;
        });
        sort(odd.begin(), odd.end(), [](auto& a, auto& b){
            return a > b;
        });

        for(int i = 0, eindex = 0, oindex = 0; i < nums.size(); i++){
            nums[i] = (i%2 == 0) ? even[eindex++] : odd[oindex++];
        }

        return nums;
    }
};