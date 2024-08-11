class Solution {
public:
    int countAsterisks(string s) {
        int len = s.length();
        bool start = false;
        int count = 0;
        for(int i = 0; i < len; i++){
            if(s[i] == '|'){
                start = !start;
            }else{
                if(s[i] == '*' && !start){
                    count++;
                }
            }
        }
        return count;
    }
};