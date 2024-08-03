class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int omoney = money;
        sort(prices.begin(), prices.end());
        int count = 0, index = 0;
        while(count < 2 && index < prices.size()){
            if(prices[index] > money) break;
            money -= prices[index];
            count++;
            index++;
        }

        return count == 2 ? money : omoney;
    }
};