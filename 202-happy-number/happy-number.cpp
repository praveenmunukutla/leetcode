class Solution {
    unordered_map<int,bool> map;
public:
     int speed = []() {
        ios::sync_with_stdio(false); // Disable synchronization with C I/O 
        cin.tie(NULL); // Untie cin from cout 
        cout.tie(NULL); // Untie cout (though this is not necessary) 
        return 0; 
    }(); 

    bool isHappy(int n){
        if(map[n]) return false;
 
        map[n] = true;

        int sum = 0;
        while(n){
            int d = n % 10;
            sum += d*d;
            n = n/10;
        }      

        if(sum == 1) return true;

        return isHappy(sum);
    }
};