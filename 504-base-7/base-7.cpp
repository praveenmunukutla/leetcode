class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        
        string ans = "";
        bool isnegative = num < 0 ? true : false;
        if(isnegative) num = num*-1;
        while(num){
            int d = num%7;
            ans.insert(0, to_string(d));
            num = num/7;
        }

        if(isnegative)
            ans.insert(0,"-");

        return ans;
    }
};