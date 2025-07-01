class Solution {
    int profit(vector<int>& prices, int day, int canBuy, int k, vector<vector<vector<int>>>& dp) {
        if (day >= prices.size() || k == 0) return 0;

        if (dp[day][canBuy][k] != -1) return dp[day][canBuy][k];

        int maxProfit = 0;
        if (canBuy) {
            int buy = -prices[day] + profit(prices, day + 1, 0, k, dp);
            int skip = profit(prices, day + 1, 1, k, dp);
            maxProfit = max(buy, skip);
        } else {
            int sell = prices[day] + profit(prices, day + 1, 1, k - 1, dp);
            int skip = profit(prices, day + 1, 0, k, dp);
            maxProfit = max(sell, skip);
        }

        return dp[day][canBuy][k] = maxProfit;
    }

public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        // if (k >= n / 2) {
        //     // Same as unlimited transactions (Leetcode 122)
        //     int profit = 0;
        //     for (int i = 1; i < n; ++i) {
        //         if (prices[i] > prices[i - 1])
        //             profit += prices[i] - prices[i - 1];
        //     }
        //     return profit;
        // }

        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(k + 1, -1)));
        return profit(prices, 0, 1, k, dp);  // start at day 0, can buy, k transactions allowed
    }
};
