using vi=vector<int>;
using vvi=vector<vi>;
class Solution {
    bool cycle=false;
    void dfs(int curr,int src,vvi&adj,vi&vis){
        vis[curr]=1;
        for(int neighbour:adj[curr]){
            if(!vis[neighbour])
                dfs(neighbour,curr,adj,vis);
            else if(neighbour != src)
                cycle=true;
        }
    }
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vvi adj(V);
        for(auto e:edges)
            adj[e[0]].push_back(e[1]),adj[e[1]].push_back(e[0]);
        vi vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i])
            dfs(i,-1,adj,vis);
        }
        return cycle;
    }
};