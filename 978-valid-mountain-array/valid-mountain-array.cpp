class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size(), i = 0, j = n -1;
        // Climb up the mountain from left
        while(i + 1 < n && arr[i] < arr[i+1])i++;
        // Climb up the mountain from right
        while(j > 0 && arr[j-1] > arr[j])j--;
        // meeting point should be same and not at boundaries.
        return i > 0 && i == j && j < n-1;
    }
};