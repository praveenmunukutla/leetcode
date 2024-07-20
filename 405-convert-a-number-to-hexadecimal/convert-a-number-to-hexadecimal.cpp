class Solution {
    string ans;
public:
    string toHex(int num) {
        if(num == 0) return "0";

        unsigned int n = num;
        string hex = "0123456789abcdef";

        while(n > 0){
            int d = n%16;
            ans.push_back(hex[d]);
            n = n / 16;
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};