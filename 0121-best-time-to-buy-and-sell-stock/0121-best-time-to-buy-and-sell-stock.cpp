class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mini=INT_MAX;
       int maxi=0;
       for(auto i:prices){
        mini=min(mini,i);
        maxi=max(maxi,i-mini);
       }
       return maxi;

    //     int buy = prices[0];
    //     int maxprofit = 0;
    //     for(int i=1; i<prices.size(); i++){
    //         if(prices[i] < buy){
    //             buy = prices[i];
    //         }
    //         int profit = prices[i] - buy;
    //         if(profit > maxprofit){
    //             maxprofit = profit;
    //         }
        
    //     }
    //     return maxprofit;
    }
};