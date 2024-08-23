class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int len = arr.size();
        vector<int> maxEle(len, 0); // Initialize result vector with size 'len' and all elements set to 0
        maxEle[len-1] = -1; // Last element should be -1 as per the problem statement

        int maxVal = arr[len-1]; // Start with the last element as the initial max
        for(int i = len-2; i >= 0; i--){ // Traverse from the second last element to the first
            maxEle[i] = maxVal; // Set the current position to the maxVal found so far
            maxVal = max(maxVal, arr[i]); // Update maxVal with the maximum of maxVal and current element
        }

        return maxEle; // Return the modified array
    }
};
