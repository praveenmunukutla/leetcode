class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;
        for(auto b : bills){
            if(b == 5) five++;
            else if(b == 10){
                if(five == 0) return false;
                five--;
                ten++;
            }else if(b == 20){
                if(ten > 0 && five > 0){
                    five--, ten--;
                }else if( five > 2){
                    five -= 3;
                }else 
                    return false;
            }
        }
        
        return true;
    }
};