class Solution {
public:
    int arrangeCoins(int n) {
        // Calculate the maximum number of complete rows k
        double k = (-1 + std::sqrt(1 + 8.0 * n)) / 2;
        return static_cast<int>(k);
    }
};