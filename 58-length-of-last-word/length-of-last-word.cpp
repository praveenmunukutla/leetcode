class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        int sum = 0;
        bool wstarted = false;
        for(int i = len-1; i >= 0; i--){
            if(s[i] == ' '){
                if(wstarted == false)
                    continue;
                return sum;
            }

            wstarted = true;
            sum++;
        }

        return sum;
    }
};