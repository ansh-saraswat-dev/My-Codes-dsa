class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini =INT_MAX;
        int maxi = 0;
        for(auto i:prices){
            mini=min(mini,i);
            maxi=max(maxi,i-mini);
        }
        return maxi;
    }
};