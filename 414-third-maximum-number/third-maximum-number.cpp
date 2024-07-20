class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long a,b,c;
        a=b=c=LONG_MIN;

        for(auto n : nums){
            if(n == a || n == b || n == c)
                continue;
            
            if(n > a){
                c = b; b = a; a = n;
            }else if(n > b){
                c = b; b = n;
            }else if(n > c){
                c = n;
            }
        }

        return c == LONG_MIN ? a : c;
    }
};