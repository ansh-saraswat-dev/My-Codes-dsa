using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
class Solution {
    int f(vector<string>& strs, int i, int m, int n, vvvi& table) {
        if (i == strs.size())
            return 0;
        if (table[i][m][n] != -1)
            return table[i][m][n];
        int c0 = count(strs[i].begin(), strs[i].end(), '0');
        int c1 = strs[i].size() - c0;
        int pick = 0, skip = 0;
        if (c0 <= m && c1 <= n)
            pick = f(strs, i + 1, m - c0, n - c1, table) + 1;
        skip = f(strs, i + 1, m, n, table);
        return table[i][m][n] = max(pick, skip);
    }

public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vvvi table(strs.size(), vvi(m + 1, vi(n + 1, -1)));
        return f(strs, 0, m, n, table);
    }
};