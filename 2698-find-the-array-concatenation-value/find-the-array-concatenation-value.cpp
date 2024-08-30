class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans = 0;
        int start = 0;
        int end = nums.size()-1;
        
        while(start <= end){
            string c = "";
            if(start != end)
               c = to_string(nums[start]) + to_string(nums[end]);
            else if(start == end)
               c = to_string(nums[start]);

            ans += stoi(c);
            start++;
            end--;
        }

        return ans;
    }
};