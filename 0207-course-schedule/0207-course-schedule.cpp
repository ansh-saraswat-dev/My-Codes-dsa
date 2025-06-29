class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<vector<int>>adj(n);
        vector<int>indeg(n,0);
        for(auto e:pre){
            adj[e[1]].push_back(e[0]);
            indeg[e[0]]++;
        }
        vector<int> ans;
        queue<int> q;
        for(int i=0;i<n;i++)
            if(indeg[i]==0)
                q.push(i);
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            ans.push_back(curr);
            for(int neigh:adj[curr]){
                indeg[neigh]--;
                if(indeg[neigh]==0)
                    q.push(neigh);
            }
        }
        if(ans.size()==n)
            return true;
        return false;
    }
};