class Solution {
    unordered_map<int,int> umap;
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> ab;
        for(auto a : arr){
            ab.push_back({a, numberOfBits(a)});
        }

        sort(ab.begin(), ab.end(), [&](const auto& a, const auto& b){
            if(a.second == b.second){
                return a.first < b.first;
            }
            return a.second < b.second;
        });

        vector<int> res;
        for(auto a : ab) res.push_back(a.first);
        return res;
    }

    int numberOfBits(int n){
        if(n == 0) return 0;
        if(n == 1) return 1;
        
        if(n%2 == 0) return numberOfBits(n/2);
        return 1+numberOfBits(n/2);
    }
};