class Solution {
public:
    int nonSpecialCount(int l, int r) {
        int upperLimit = sqrt(r);
        vector<bool> isprime(upperLimit+10, true);
        isprime[0] = isprime[1] = false;

        for(int i = 2; i * i <= upperLimit; i++){
            if(isprime[i]){
                for(int j = i * i; j <= upperLimit; j += i){
                    isprime[j] = false;
                }
            }
        }

        int specialNumbers = 0;
        for(long long int i = 2; i <= upperLimit; i++){
            if(isprime[i]){
                long long sn = i * i;
                if(sn >= l && sn <= r)
                    specialNumbers++;
            }
        }

        return (r-l+1) - specialNumbers;
    }
};