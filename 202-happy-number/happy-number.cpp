class Solution {
    unordered_map<int,bool> map;
public:
    bool isHappy(int n) {
        return isHappyUtil(n);
    }

    bool isHappyUtil(int n){
        if(map[n]) return false;
 
        map[n] = true;

        int sum = 0;
        while(n){
            int d = n % 10;
            sum += d*d;
            n = n/10;
        }      

        if(sum == 1) return true;

        return isHappyUtil(sum);
    }
};