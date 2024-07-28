class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;  // This vector will store the results for each prefix

        unsigned long long int dec = 0;  // This will hold the current decimal value of the binary prefix
        for(int i = 0; i < nums.size(); i++) {
            // Update the decimal value by shifting left (equivalent to multiplying by 2)
            // and adding the current binary digit
            dec = ((((unsigned long long)dec) * 2) + nums[i]) % 5;

            // Check if the current decimal value is divisible by 5
            if(dec == 0) {
                ans.push_back(true);  // If divisible by 5, add true to the result vector
            } else {
                ans.push_back(false);  // If not divisible by 5, add false to the result vector
            }
        }

        return ans;  // Return the result vector containing true/false for each prefix
    }
};
