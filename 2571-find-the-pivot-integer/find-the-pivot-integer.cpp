class Solution {
public:
    int pivotInteger(int n) {
        // Total sum of integers from 1 to n
        int ts = (n * (n + 1)) / 2;
        
        int left = 1;
        int right = n;
        
        while (left <= right) {
            int mid = left + ((right - left) / 2);
            int ls = (mid * (mid + 1)) / 2; // Sum from 1 to mid
            int rs = ts - ls + mid; // Sum from mid to n (inclusive)

            if (ls == rs) return mid; // Pivot found
            if (ls > rs) right = mid - 1; // Search left
            else left = mid + 1; // Search right
        }

        return -1; // No pivot found
    }
};
