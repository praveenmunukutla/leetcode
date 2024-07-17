class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        
        int sum = 0;
        int len = s.length();
        
        for (int i = 0; i < len; ++i) {
            // If the current value is less than the next value, subtract it
            if (i < len - 1 && roman[s[i]] < roman[s[i + 1]]) {
                sum -= roman[s[i]];
            } else {
                sum += roman[s[i]];
            }
        }
        
        return sum;
    }
};
