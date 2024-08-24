class Solution {
    unordered_map<int,int> umap;
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [&](const auto& a, const auto& b){

            auto ac = __builtin_popcount(a);
            auto bc = __builtin_popcount(b);

            if(ac == bc){
                return a < b;
            }

            return ac < bc;
        });

        return arr;
    }
};