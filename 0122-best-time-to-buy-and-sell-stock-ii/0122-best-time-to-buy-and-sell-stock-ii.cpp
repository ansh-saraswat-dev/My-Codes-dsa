class Solution {
    int profit(vector<int>& prices, int day, int state, vector<vector<int>>& table) {
        if (day == prices.size()) return 0;

        if (table[state][day] != -1) return table[state][day];

        int maxProfit = 0;
        if (state == 0) {
            int buy = -prices[day] + profit(prices, day + 1, 1, table);
            int dontBuy = profit(prices, day + 1, 0, table);
            maxProfit = max(buy, dontBuy);
        } else {
            int sell = prices[day] + profit(prices, day + 1, 0, table);
            int dontSell = profit(prices, day + 1, 1, table);
            maxProfit = max(sell, dontSell);
        }

        return table[state][day] = maxProfit;
    }

public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> table(2, vector<int>(n, -1));  // memo table
        return profit(prices, 0, 0, table);  // start at day 0, can buy
    }
};
