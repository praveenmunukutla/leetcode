class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        double special = 0.25 * arr.size(); // 25% threshold for array size
        for(int i = 0; i < arr.size(); i++){
            int val = arr[i]; // Current value to evaluate
            int j = i+1;
            while(j < arr.size() && arr[j] == val) j++; // Count consecutive occurrences
            double count = j - i; // Calculate the count of `val`
            i = j-1; // Skip over checked elements
            if(count > special) return val; // Return `val` if it exceeds the threshold
        }
        return 0; // Default return, should never reach due to problem constraints
    }
};
