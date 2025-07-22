class Solution {
public:

    int solve(vector<int>&cost,int n){
    
        int prev=cost[0];
        int prev2=cost[1];
        
        for(int i=2;i<n;i++){
            int curr=cost[i]+min(prev,prev2);
            prev=prev2;
            prev2=curr;
        }
        return min(prev,prev2);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int ans=solve(cost,n);
        return ans;
    }
};