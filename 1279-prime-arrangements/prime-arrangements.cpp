class Solution {
    const int MOD = 1000000007;
public:
    int numPrimeArrangements(int n) {
        if(n == 1) return 1;
        
        vector<bool> isPrime(n+1, true);
        isPrime[0] = isPrime[1] = false;
        for(int i = 2; i*i <= n; i++){
            if(isPrime[i]){
                for(int j = i*i; j <= n; j += i){
                    isPrime[j] = false;
                }
            }
        }

        int primes = 0, nonprimes = 0;
        for(int i = 1; i <= n; i++){
             isPrime[i] ? primes++ : nonprimes++;
        }

        return (factorial(primes) * factorial(nonprimes)) % MOD;
    }

    long long int factorial(int n){
        if(n == 1) return 1;
        return (n*factorial(n-1))%MOD;
    }
};