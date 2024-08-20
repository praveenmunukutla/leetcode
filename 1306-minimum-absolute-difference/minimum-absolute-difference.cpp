class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        sort(arr.begin(), arr.end());
        int minAD = INT_MAX;
        for(int i = 1; i < arr.size(); i++){
            int mv = abs(arr[i]-arr[i-1]);
            if(mv < minAD){
                res.clear();
                res.push_back({arr[i-1], arr[i]});
                minAD = mv;
            }else if(mv == minAD){
                res.push_back({arr[i-1], arr[i]});
            }
        }
        
        return res;
    }
};