class Solution {
public:
    int addDigits(int num) {
        // Base case: if num is 0, its digital root is 0
        if(num == 0)
            return 0;
        
        // Formula to compute the digital root
        // 1 + ((num - 1) % 9) effectively computes the digital root of num
        // Explanation:
        // - (num - 1) % 9 computes the sum of digits of num modulo 9
        // - Adding 1 adjusts the result to ensure that the digital root is correctly computed,
        //   even when the sum of digits modulo 9 is 0 (which would correspond to a digital root of 9)
        return 1 + ((num - 1) % 9);
    }
};
