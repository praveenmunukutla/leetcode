class Solution {
public:
    string digitSum(string s, int k) {
        return util(s, k);
    }

    string util(string s, int k){
        int len = s.length();
        if(len <= k) return s;

        string ans = "";
        int i = 0;
        for(i = 0; i < len; ){

            int sum = 0;
            int tk = k;
            int index = i;
            while(index < len && tk--){
                sum += (int)(s[index++]-'0');
            }

            i = index;
            ans += to_string(sum);
        }

        return util(ans, k);
    }
};