class Solution {
public:
    int orangesRotting(vector<vector<int>>& arr) {
    int n=arr.size();
    int m=arr[0].size();
    queue<pair<pair<int,int>,int>>q;
    int fresh=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == 2){
                q.push({{i,j},0});
            }
            if(arr[i][j]==1) fresh++;
            }
        }
        int ans=0;
        while(q.empty() == false){
            auto it = q.front();
            q.pop();
            int row=it.first.first;
            int col=it.first.second;
            int time=it.second;
            ans = max(ans,time);
            int delrow[]={1,-1,0,0};
            int delcol[]={0,0,1,-1};
            for(int i=0 ; i<4 ; i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if(nrow >= 0 and ncol >=0 and nrow < n and ncol < m and arr[nrow][ncol]==1){
                    arr[nrow][ncol]=2;
                    q.push({{nrow,ncol},time+1});
                    fresh--;
                }
            }
        }

        if(fresh==0) return ans;
        else return -1;
    }
};