using ll = long long;
using vi = vector<ll>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
class Solution {
    ll profit(vector<int>& prices, int day, int state, int k, vvvi& table) {
        if (day == prices.size() && state == 0)
            return 0;
        if (day == prices.size() && state != 0)
            return -1e18;
        if (k == 0)
            return 0;
        if (table[state][day][k] != -1)
            return table[state][day][k];
        ll maxProfit = 0;
        if (state == 0) {
            ll buy = -prices[day] + profit(prices, day + 1, 1, k, table);
            ll dontBuy = profit(prices, day + 1, 0, k, table);
            ll shortSell = prices[day] + profit(prices, day + 1, 2, k, table);
            maxProfit = max({buy, dontBuy, shortSell});
        } else if(state == 1) {
            ll sell = prices[day] + profit(prices, day + 1, 0, k - 1, table);
            ll dontSell = profit(prices, day + 1, 1, k, table);
            maxProfit = max(sell, dontSell);
        } else{
            ll buy = -prices[day] + profit(prices, day + 1, 0, k - 1, table);
            ll dontBuy = profit(prices, day + 1, 2, k, table);
            maxProfit = max(buy, dontBuy);
        }
        return table[state][day][k] = maxProfit;
    }

public:
    ll maximumProfit(vector<int>& prices, int k) {
        int n = prices.size();
        vvvi table(3, vvi(n, vi(k + 1, -1)));
        return profit(prices, 0, 0, k, table);
    }
};