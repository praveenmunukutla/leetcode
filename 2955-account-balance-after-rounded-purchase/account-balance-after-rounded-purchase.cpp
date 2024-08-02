class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        // If the purchase amount is 0, the balance remains 100
        if(purchaseAmount == 0) return 100;

        // If the purchase amount is a multiple of 10, subtract it directly from 100
        if(purchaseAmount % 10 == 0) return (100 - purchaseAmount);

        // Calculate the remainder when purchase amount is divided by 10
        int remainder = purchaseAmount % 10;

        // Round the purchase amount based on the remainder
        // If remainder is 5 or more, round up to the next multiple of 10
        // If remainder is less than 5, round down to the previous multiple of 10
        auto rounded = remainder >= 5 ? (((purchaseAmount / 10) * 10) + 10) : (((purchaseAmount / 10) * 10));

        // Subtract the rounded purchase amount from 100 and return the balance
        return 100 - rounded;
    }
};
