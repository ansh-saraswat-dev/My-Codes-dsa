class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        bool firstRow = false, firstCol = false;

        // Step 1: Mark zeros in first row and column
        for(int i = 0; i < m; ++i)
            if(matrix[i][0] == 0) firstCol = true;

        for(int j = 0; j < n; ++j)
            if(matrix[0][j] == 0) firstRow = true;

        // Step 2: Use first row and col as markers
        for(int i = 1; i < m; ++i){
            for(int j = 1; j < n; ++j){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Step 3: Set matrix cells to 0 based on markers
        for(int i = 1; i < m; ++i){
            for(int j = 1; j < n; ++j){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 4: Set first row and column if needed
        if(firstRow){
            for(int j = 0; j < n; ++j)
                matrix[0][j] = 0;
        }

        if(firstCol){
            for(int i = 0; i < m; ++i)
                matrix[i][0] = 0;
        }
    }
};
