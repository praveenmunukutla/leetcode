class Solution {
public:
     int speed = []() { 
        ios::sync_with_stdio(false); // Disable synchronization with C I/O 
        cin.tie(NULL); // Untie cin from cout 
        cout.tie(NULL); // Untie cout (though this is not necessary) 
        return 0; 
    }(); 

    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int profit = 0;

        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < buyPrice){
                buyPrice = prices[i];
            }

            profit = max(profit, prices[i]-buyPrice);
        }

        return profit;
    }
};