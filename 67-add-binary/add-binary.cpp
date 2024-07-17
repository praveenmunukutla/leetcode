class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length(), j = b.length(), carry = 0;
        string ans = "";
        while(i >= 0 || j >= 0 || carry > 0){
            int ai = i>=0 ? a[i]-'0' : 0;
            int bi = j>=0 ? b[j]-'0' : 0;

            // 00 | 0 = 0
            // 00 | 1 = 1
            //01;10 | 0 = 2
            //01;10 | 1 = 3
            //11 | 0 = 2
            //11 | 1 = 3

            int sum = ai + bi + carry;

            switch(sum){
                case 0: ans += "0", carry = 0; break;
                case 1: ans += "1", carry = 0; break;
                case 2: ans += "0", carry = 1; break;
                case 3: ans += "1", carry = 1; break;
            }

            i--, j--;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};