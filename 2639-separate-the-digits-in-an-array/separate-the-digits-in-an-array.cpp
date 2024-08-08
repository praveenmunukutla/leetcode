class Solution {
public:
    // Function to separate digits of each number in the input vector
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans; // Vector to store the separated digits

        // Iterate over each number in the input vector
        for (auto n : nums) {
            string s = to_string(n); // Convert the number to a string
            
            // Iterate over each character in the string representation of the number
            for (auto c : s)
                ans.push_back(c - '0'); // Convert character to digit and add to ans
        }
        return ans; // Return the vector containing all separated digits
    }
};