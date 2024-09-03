class Solution {
public:
    int myAtoi(string s) {
        int index = 0;
        int len = s.length();
        int sign = 1;
 
        // skip leading white spaces.
        while(s[index] == ' ' && index < len)
            index++;

        // determine the sign.
        if(s[index] == '-' || s[index] == '+'){
            sign = s[index] == '-' ? -1 : 1;
            index ++;
        }

        //calculate result and break if you find characters.
        long result = 0;
        for(int i = index ; i < len; i++){
            if(isdigit(s[i])){
                result = (result*10+ (s[i]-'0'));
                //handle overlow and return INT_MAX if result exceeds INT_MAX.
                // like wise for the  INT_MIN.
                if(result * sign > INT_MAX) return INT_MAX;
                else if(result * sign < INT_MIN) return INT_MIN;
            }else{
                break;
            }
        }

        return result*sign;
    }
};