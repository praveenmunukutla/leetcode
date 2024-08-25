class Solution {
public:
    // Count pairs of numbers where either they are equal or can be made equal
    // by swapping exactly two digits
    int countPairs(vector<int>& nums) {
        int len = nums.size();
        int countpairs = 0;
        for(int i = 0; i < len; i++) {
            for(int j = i + 1; j < len; j++) {
                // Check if nums[i] and nums[j] are equal or can be made equal by swapping
                if(nums[i] == nums[j] || check(nums[i], nums[j]))
                    countpairs++;
            }
        }
        return countpairs;
    }

    // Check if swapping exactly two digits in a1 makes it equal to b1
    bool check(int a1, int b1) {
        string s1 = to_string(a1);
        string s2 = to_string(b1);
        
        // Pad the shorter string with leading zeros
        while(s1.length() < s2.length()) s1 = "0" + s1;
        while(s2.length() < s1.length()) s2 = "0" + s2;

        int diff = 0, a = -1, b = -1;
        for(int i = 0; i < s1.length(); i++) {
            // Track differing positions
            if(s1[i] != s2[i]) {
                diff++;
                if(diff == 1) a = i;      // First differing position
                else if(diff == 2) b = i; // Second differing position
                else return false;       // More than 2 differences, cannot be swapped
            }
        }

        // Swap the two differing positions and check if strings match
        if(diff == 2) {
            swap(s1[a], s1[b]);
        }

        return s1 == s2;
    }
};
