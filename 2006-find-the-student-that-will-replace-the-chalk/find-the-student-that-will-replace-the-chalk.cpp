class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) { 
        long long sum = 0;     
        for (int c : chalk) {
            sum += c;
        }

        // Reduce k to the remainder after completing full rounds
        k = k % sum;

        // Find the student who will be unable to finish their chalk
        for (int i = 0; i < chalk.size(); i++) {
            if (chalk[i] > k) return i;
            k -= chalk[i];
        }

        return 0; // This line should never be reached based on the problem constraints
    }
};
