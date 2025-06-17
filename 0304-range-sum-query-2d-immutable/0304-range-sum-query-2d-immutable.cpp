class NumMatrix {
public:
    vector<vector<int>> preSum;  // Make preSum a class member

    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        // Initialize preSum with 0s
        preSum = vector<vector<int>>(m, vector<int>(n, 0));   

        // Fill preSum using inclusion-exclusion principle
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                preSum[i][j] = matrix[i][j]
                             + (i ? preSum[i - 1][j] : 0)
                             + (j ? preSum[i][j - 1] : 0)
                             - ((i && j) ? preSum[i - 1][j - 1] : 0);
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return preSum[row2][col2]
             - (row1 ? preSum[row1 - 1][col2] : 0)
             - (col1 ? preSum[row2][col1 - 1] : 0)
             + ((row1 && col1) ? preSum[row1 - 1][col1 - 1] : 0);
    }
};
