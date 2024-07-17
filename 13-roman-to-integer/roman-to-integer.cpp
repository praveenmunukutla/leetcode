class Solution {
    unordered_map<char,int> map = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
public:
    int romanToInt(string s) {
        //roman to Int follow rules.
        // only certain subtractive combinations are allowed.
        int sum = 0, len = s.length();
        for(int i = 0; i < len; i++){
            if(i < len-1 && map[s[i]] < map[s[i+1]]){
                sum -= map[s[i]];
            }else{
                sum += map[s[i]];
            }
        }
        return sum;
    }
};