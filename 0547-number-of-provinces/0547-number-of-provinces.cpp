using vi=vector<int>;
using vvi=vector<vi>;
class Solution {
    void dfs(int curr,vvi&adj,vi&vis){
        vis[curr]=1;
        for(auto neighbour:adj[curr]){
            if(vis[neighbour]==0)
                dfs(neighbour,adj,vis);
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vvi adj(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i != j && isConnected[i][j]==1)
                    adj[i].push_back(j);
            }
        }

        vi vis(n,0);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(vis[i]) continue;
            cnt++;
            dfs(i,adj,vis);
        }
        return cnt;
    }
};