// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        while(left <= right){
            int mid = left + (right - left)/2;
            bool isMidBad = isBadVersion(mid);
            bool isMidMinusOneBad = mid > 1 ? isBadVersion(mid-1) : false;

            if(isMidBad == true && isMidMinusOneBad == false) return mid;
            else if(isMidBad == false && isMidMinusOneBad == false) left = mid+1;
            else right = mid-1;
        }
        
        return -1;
    }
};