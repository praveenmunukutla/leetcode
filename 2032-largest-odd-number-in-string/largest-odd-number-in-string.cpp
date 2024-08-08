class Solution {
public:
    string largestOddNumber(string num) {
        int len = num.length(), index = -1;
        for(int i = len-1; i >= 0; i--){
            if((num[i]-'0')%2 != 0){
                index = i; break;
            }
        }

        if(index == -1) return "";

        return num.substr(0, index+1);
    }
};