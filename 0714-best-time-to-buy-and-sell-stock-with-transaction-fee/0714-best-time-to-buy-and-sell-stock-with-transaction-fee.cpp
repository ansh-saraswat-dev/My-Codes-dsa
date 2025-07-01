class Solution {
    int profit(vector<int>& prices, int day, int state, int fee, vector<vector<int>>& table) {
        if (day >= prices.size()) return 0;

        if (table[state][day] != -1) return table[state][day];

        int maxProfit = 0;
        if (state == 0) {
            // We can buy
            int buy = -prices[day] + profit(prices, day + 1, 1, fee, table);
            int dontBuy = profit(prices, day + 1, 0, fee, table);
            maxProfit = max(buy, dontBuy);
        } else {
            // We can sell (pay fee)
            int sell = prices[day] - fee + profit(prices, day + 1, 0, fee, table);
            int dontSell = profit(prices, day + 1, 1, fee, table);
            maxProfit = max(sell, dontSell);
        }

        return table[state][day] = maxProfit;
    }

public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> table(2, vector<int>(n, -1));
        return profit(prices, 0, 0, fee, table);  // Start at day 0, can buy
    }
};
