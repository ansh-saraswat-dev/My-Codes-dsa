class Solution{
    int m,n;
    vector<int> dx = {-1, 1, 0, 0};
    vector<int> dy = {0, 0, -1, 1};

    void dfs(int i, int j, vector<vector<char>> &board) {
        if (i < 0 || j < 0 || i >= m || j >= n || board[i][j] != 'O') return;

        board[i][j] = 'Y'; 
        for (int d = 0; d < 4; d++)
            dfs(i + dx[d], j + dy[d], board);
    }
    public:
    void solve(vector<vector<char>>& board){
        m=board.size();
        n=board[0].size();
        for(int i=0;i<m;i++){
            if(board[i][0]=='O') dfs(i,0,board);
            if(board[i][n-1]=='O') dfs(i,n-1,board);
        }
        for (int j = 0; j<n; j++) {
            if (board[0][j] == 'O') dfs(0, j, board);
            if (board[m - 1][j] == 'O') dfs(m - 1, j, board);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O') board[i][j]='X';
                else if(board[i][j]=='Y') board[i][j]='O';
            }
        }
    }
};
