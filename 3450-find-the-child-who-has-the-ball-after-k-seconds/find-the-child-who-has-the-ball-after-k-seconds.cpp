class Solution {
    enum direction{
        increase,
        decrease
    };
public:
    int numberOfChild(int n, int k) {
        int index = 0;
        direction d;
        while(k){
            if(index == 0) d = direction::increase;
            else if(index == n-1) d = direction::decrease;

            if(d == direction::increase) index++;
            else if(d == direction::decrease) index--;

            k--;
        }

        return index;
    }
};