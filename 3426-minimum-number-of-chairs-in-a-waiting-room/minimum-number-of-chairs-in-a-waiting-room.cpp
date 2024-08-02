class Solution {
public:
    int minimumChairs(string s) {
        int maxChairs = 0;
        int count = 0;
        for(auto c : s){
            if(c == 'E'){
                count++;
            }else if(c == 'L'){
                count--;
            }
            maxChairs = max(maxChairs, count);
        }
        return maxChairs;
    }
};