class Solution {
public:
    int mySqrt(int x) {
        int left = 2, right = x, mid = 0;
        while(left <= right){
            mid = left + ((right - left)/2);

            if(mid == x / mid){
                return mid;
            }
            else if(mid < x / mid){
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return right;
    }
};