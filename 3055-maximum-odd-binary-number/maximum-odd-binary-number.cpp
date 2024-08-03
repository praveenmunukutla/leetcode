class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count = 0;
        for(auto c : s) if(c == '1') count++;
        int len = s.length();

        string ans = "";
        int aones = count-1;
        int azeros = len - count;
        count = count - (count-1);

        while(aones > 0){
            ans += "1";
            aones--;
        }

        while(azeros > 0){
            ans += "0";
            azeros--;
        }

        while(count > 0){
            ans += "1";
            count--;
        }

        return ans;
    }
};