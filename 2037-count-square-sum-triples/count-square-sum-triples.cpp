class Solution {
public:
    int countTriples(int n) {
        int count = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(i == j) continue;
                auto sum = (i*i) + (j*j);
                auto sroot = (int)sqrt(sum);
                if(sroot <= n && sroot*sroot == sum) count++;
            }
        }

        return count;
    }
};