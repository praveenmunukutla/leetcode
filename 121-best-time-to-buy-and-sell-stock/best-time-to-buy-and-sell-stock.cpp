class Solution {
public:
    int speed = []() { 
        ios::sync_with_stdio(false); // Disable synchronization with C I/O 
        cin.tie(NULL); // Untie cin from cout 
        cout.tie(NULL); // Untie cout (though this is not necessary) 
        return 0; 
    }(); 

    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0]; // Initialize buyPrice with the first element of prices
        int profit = 0; // Initialize profit to 0

        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] < buyPrice) { // If current price is less than buyPrice, update buyPrice
                buyPrice = prices[i];
            }

            // Calculate the maximum profit that can be achieved by selling at prices[i]
            // and buying at the lowest price encountered so far (buyPrice)
            profit = max(profit, prices[i] - buyPrice);
        }

        return profit; // Return the maximum profit found
    }
};
