class Solution {
    vector<int> dx = {-1, 1, 0, 0};
    vector<int> dy = {0, 0, -1, 1};
    int m, n;

    void dfs(int i, int j, vector<vector<int>> &grid) {
        if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == 0) return;
        grid[i][j] = 0; // mark as water (visited)
        for (int dir = 0; dir < 4; dir++) {
            dfs(i + dx[dir], j + dy[dir], grid);
        }
    }

public:
    int numEnclaves(vector<vector<int>> &grid) {
        m = grid.size();
        n = grid[0].size();

        // Step 1: Remove land connected to boundary
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || j == 0 || i == m - 1 || j == n - 1) {
                    if (grid[i][j] == 1) {
                        dfs(i, j, grid);
                    }
                }
            }
        }

        // Step 2: Count remaining land (enclaves)
        int cnt = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (grid[i][j] == 1)
                    cnt++;

        return cnt;
    }
};
