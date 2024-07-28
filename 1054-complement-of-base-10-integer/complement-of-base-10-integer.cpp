class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;

        string ans = "";
        while(n){
            int d = n&1;
            d = d ^ 1;
            ans.insert(0, to_string(d));
            n = n >> 1;
        }

        int dec = 0;
        for(int i = 0; ans[i] != '\0'; i++){
            dec = dec * 2 + ans[i]-'0';
        }

        return dec;
    }
};