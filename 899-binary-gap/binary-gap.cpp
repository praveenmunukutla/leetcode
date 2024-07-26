class Solution {
public:
    int binaryGap(int n) {
        int p1 = -1, p2 = -1;
        int i = 0, ans = 0;

        while(n){
            int d = n & 1;

            if(d == 1) {
                if(p1 == -1){
                    p1 = i;
                }else {
                    ans = max(ans, i - p1);
                    p1 = i;
                }
            }

            n = n >> 1;
            i++;
        }

        return ans;
    }
};