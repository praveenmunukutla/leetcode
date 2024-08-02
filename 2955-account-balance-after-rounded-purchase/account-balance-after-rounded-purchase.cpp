class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        if(purchaseAmount == 0) return 100;
        if(purchaseAmount % 10 == 0) return (100-purchaseAmount);

        int remainder = purchaseAmount%10;

        auto rounded =  remainder >=5 ? (((purchaseAmount/10)*10)+10) : (((purchaseAmount/10)*10));

        return 100 - rounded;
    }
};