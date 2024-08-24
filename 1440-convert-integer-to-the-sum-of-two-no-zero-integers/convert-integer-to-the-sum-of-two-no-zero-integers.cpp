class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i = 1; i <= n/2; i++){
            // Skip if either `i` or `n-i` contains '0'
            if(cZero(i) || cZero(n-i)) continue;

            // Return the pair of integers with no '0' digits
            return {i, n-i};
        }

        return {0,0}; // Default return, in case no valid pair is found
    }

    // Lambda function to check if a number contains the digit '0'
    bool cZero (int val){
        while(val){
            int d = val % 10;
            if(d == 0) break; // Break if any digit is '0'
            val /= 10; // Move to the next digit
        }
        return val ? true : false; // Return true if '0' was found
    };
};
