class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        int size = mountain.size();
        vector<int> res;
        for(int i = 1; i < size-1; i++){
            if(mountain[i] > mountain[i-1] && mountain[i] > mountain[i+1])
                res.push_back(i);
        }
        return res;
    }
};