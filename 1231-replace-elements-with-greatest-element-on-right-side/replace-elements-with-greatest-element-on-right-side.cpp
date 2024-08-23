class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int len = arr.size();
        vector<int> maxEle(len, 0);
        maxEle[len-1]=-1;

        int maxVal = arr[len-1];
        maxEle[len-1] = -1;
        for(int i = len-2; i >= 0; i--){
            maxEle[i] = maxVal;
            maxVal = max(maxVal, arr[i]);
        }

        return maxEle;
    }
};