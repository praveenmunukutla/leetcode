class Solution {
public:
    vector<int> evenOddBit(int n) {
        int odd = 0, even = 0;
        int count = 0;
        while(n){
            int b = n & 1;

            if(b){
                if(count % 2 == 1) odd++;
                else even++;
            }

            n = n >> 1;
            count++;
        }

        return {even, odd};
    }
};