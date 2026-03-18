class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> prefix(m+1, vector<int>(n+1, 0));
        
        int count = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                prefix[i+1][j+1] = grid[i][j] 
                                + prefix[i][j+1] 
                                + prefix[i+1][j] 
                                - prefix[i][j];

                if(prefix[i+1][j+1] <= k)
                    count++;
            }
        }

        return count;
    }
};
