class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;

        int dec = 0;
        int power = 1;
        while(n){
            int d = n&1;
            d = d ^ 1;

            if(d)
                dec += power;
            power = 2 * power;

            n = n >> 1;
        }

        // int dec = 0;
        // for(int i = 0; ans[i] != '\0'; i++){
        //     dec = dec * 2 + ans[i]-'0';
        // }

        return dec;
    }
};