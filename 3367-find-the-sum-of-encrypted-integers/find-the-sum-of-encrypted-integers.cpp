class Solution {
public:

    int encrpty(int n){
        if(n < 10) return n;
        
        int tn = n;
        int maxd = 0;
        int count = 0;
        while(tn){
            int d = tn % 10;
            maxd = max(d, maxd);
            tn = tn/10;
            count++;
        }
        
        int enumber = 0;
        while(count){
            enumber = enumber*10 + maxd;
            count--;
        }

        return enumber;
    }

    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(auto n : nums){
            sum += encrpty(n);
        }
        return sum;
    }
};