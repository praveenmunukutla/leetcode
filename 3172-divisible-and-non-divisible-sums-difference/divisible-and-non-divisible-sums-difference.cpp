class Solution {
public:
    int differenceOfSums(int n, int m) {
        int ts = (n * (n+1)) / 2;

        auto nd = n/m;
        auto sd = (nd * (nd+1)) / 2;
        sd = sd * m;

        auto snd = ts - sd;

        return snd - sd;
    }
};