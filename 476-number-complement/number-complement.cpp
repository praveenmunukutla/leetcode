class Solution {
public:
    int findComplement(int num) {
        if (num == 0) return 1; // Special case: complement of 0 is 1

        int nbits = 0;
        int cnum = num;
        while (cnum > 0) {
            cnum = cnum >> 1;
            nbits++;
        }

        long int allones = (1 << nbits);
        allones = allones - 1;

        return num ^ allones;
    }
};
