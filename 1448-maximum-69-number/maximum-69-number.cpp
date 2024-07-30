class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);

        bool didApplyChange = false;
        int ans = 0;
        for(int i = 0; s[i] != '\0'; i++)
        {
            if(s[i] == '6' && !didApplyChange) {
                s[i] = '9';
                didApplyChange = true;
            }

            ans = ans * 10 + (s[i]-'0');
        }

        return ans;
    }
};