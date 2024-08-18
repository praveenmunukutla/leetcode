class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even; // Vector to store elements at even indices
        vector<int> odd;  // Vector to store elements at odd indices

        // Split nums into even and odd indexed elements
        for(int i = 0; i < nums.size(); i++){
            if (i % 2 == 0) {
                even.push_back(nums[i]); // Collect elements at even indices
            } else {
                odd.push_back(nums[i]); // Collect elements at odd indices
            }
        }

        // Sort even-indexed elements in ascending order
        sort(even.begin(), even.end());

        // Sort odd-indexed elements in descending order
        sort(odd.begin(), odd.end(), greater<int>());

        // Merge sorted even and odd indexed elements back into nums
        for(int i = 0, eindex = 0, oindex = 0; i < nums.size(); i++){
            if (i % 2 == 0) {
                nums[i] = even[eindex++]; // Place sorted even-indexed element
            } else {
                nums[i] = odd[oindex++]; // Place sorted odd-indexed element
            }
        }

        return nums; // Return the modified nums vector
    }
};
