class DSU {
    public:
    vector<int>par;
	vector<int>size;
    int cc;
    DSU(int n){
        cc=n;
        par.resize(n);
        size.resize(n, 1);
    for(int i = 0; i < n; i++) par[i] = i; // self-parent
        // iota(par.begin(),par.end(),0);
    }
    int findParent(int x){
        if(par[x] == x) return x;
        return par[x] = findParent(par[x]);
    }
    bool unionSets(int u, int v){
        int pu = findParent(u);
        int pv = findParent(v);
        if(pu == pv)    return true;
        if(size[pu] > size[pv])
            par[pv] = pu, size[pu] += size[pv];
        else
            par[pu] = pv, size[pv] += size[pu];
        cc--;
        return false;
    }
};
class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size() < n-1) return -1;
        DSU dsu(n);
        for(auto e:connections)    
            dsu.unionSets(e[0],e[1]);
        return dsu.cc-1;
    }
};