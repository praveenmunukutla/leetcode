class Solution {

public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        unordered_set<int> bobs(bobSizes.begin(),bobSizes.end());
        auto as = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        auto bs = accumulate(bobSizes.begin(), bobSizes.end(), 0);
        auto delta  = (bs-as)/2;

        for(auto a : aliceSizes){
            if(bobs.count(a+delta)){
                return {a, a+delta};
            }
        }

        return {0,0};
    }
};