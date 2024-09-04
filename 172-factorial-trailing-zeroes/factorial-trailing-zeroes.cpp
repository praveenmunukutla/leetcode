class Solution {
public:
    int trailingZeroes(int n) {
        auto fpow = [&](int v){
            return pow(5,v);
        };

        int nfactors = 0;
        for(int i = 1; ;i++){
            int val = fpow(i);
            if(val > n) break;
            nfactors += n/val;
        }

        return nfactors;
    }
};