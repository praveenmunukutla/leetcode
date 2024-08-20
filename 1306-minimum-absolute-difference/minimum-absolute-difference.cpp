class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res; // Resulting pairs
        sort(arr.begin(), arr.end()); // Sort the array
        int minAD = INT_MAX; // Initialize minimum absolute difference
        
        for(int i = 1; i < arr.size(); i++) {
            int mv = abs(arr[i] - arr[i-1]); // Calculate absolute difference
            
            if(mv < minAD) { 
                res.clear(); // New minimum found, clear previous results
                res.push_back({arr[i-1], arr[i]}); // Add new pair
                minAD = mv; // Update minimum difference
            } else if(mv == minAD) {
                res.push_back({arr[i-1], arr[i]}); // Add pair with same minimum difference
            }
        }
        
        return res; // Return all pairs with minimum absolute difference
    }
};
