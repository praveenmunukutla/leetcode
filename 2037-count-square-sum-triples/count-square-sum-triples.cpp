class Solution {
public:
    int countTriples(int n) {
        int count = 0;
        for(int i = 1; i <= n; i++){
            for(int j = i+1; j <= n; j++){
                auto sum = (i*i) + (j*j);
                auto sroot = (int)sqrt(sum);
                if(sroot <= n && sroot*sroot == sum) count+=2;
            }
        }

        return count;
    }
};