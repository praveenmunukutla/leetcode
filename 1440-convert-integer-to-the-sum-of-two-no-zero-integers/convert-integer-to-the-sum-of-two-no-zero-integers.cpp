class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i = 1; i <= n; i++){
            auto cZero = [](int val){
                while(val){
                    int d = val%10;
                    if(d == 0)break;
                    val /= 10;
                }
                return val ? true : false;
            };

            if(cZero(i) || cZero(n-i)) continue;

            return {i, n-i};
        }

        return {0,0};
    }
};