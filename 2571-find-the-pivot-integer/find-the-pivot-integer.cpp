class Solution {
public:
    int pivotInteger(int n) {
        int ts = (n*(n+1))/2;
        int left = 1;
        int right = n;
        while(left <= right){
            int mid = left + ((right-left)/2);
            int ls = (mid*(mid+1))/2;
            int rs = ts-ls+mid;
            if(ls == rs) return mid;
            if(ls > rs) right = mid-1;
            else left = mid+1;
        }

        return -1;
    }
};