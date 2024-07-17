class Solution {
public:
    int mySqrt(int x) {
        // Handle the edge case where x is 0 or 1
        if (x < 2) {
            return x;
        }

        int left = 1, right = x / 2, mid = 0;
        while (left <= right) {
            mid = left + ((right - left) / 2);
            
            // To avoid overflow, compare mid with x / mid instead of mid * mid with x
            if (mid == x / mid) {
                return mid;
            } else if (mid < x / mid) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        // At this point, right is the integer part of the square root
        return right;
    }
};
