class Solution {
public:
    int getLucky(string s, int k) {
        string num = "";
        
        // Convert each character to its corresponding numerical value in the alphabet.
        for(auto c : s)
            num += to_string((c - 'a') + 1);

        // Iterate k times, transforming the number by summing its digits.
        while (k--) {
            int sum = 0;
            for (auto digit : num)
                sum += (digit - '0');  // Convert character digit to integer and sum

            num = to_string(sum);  // Convert the sum back to a string for the next iteration
        }

        // The final result is stored in `num`, so convert it to an integer and return.
        return stoi(num);
    }
};
