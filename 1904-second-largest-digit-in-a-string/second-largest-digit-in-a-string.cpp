class Solution {
public:
    int secondHighest(string s) {
        int fl = -1, sl = -1;
        for(auto c : s){
            if(isdigit(c)){
                int val = c-'0';
                if(val > fl){
                    sl = fl; fl = val;
                }else if(val < fl && val > sl){
                    sl = val;
                }
            }
        }
        return sl;
    }
};