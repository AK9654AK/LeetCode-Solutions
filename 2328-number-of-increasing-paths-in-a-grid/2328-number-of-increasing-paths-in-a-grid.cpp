class Solution {
public:
    static const int M = 1e9+7;
    int dp[1001][1001] {0};

    int dfs(vector<vector<int>>& grid, int i, int j, int prev){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || prev >= grid[i][j])
            return 0;

        if(dp[i][j] != -1)
            return dp[i][j];

        int top = dfs(grid, i-1, j, grid[i][j]);
        int bottom = dfs(grid, i+1, j, grid[i][j]);
        int left = dfs(grid, i, j-1, grid[i][j]);
        int right = dfs(grid, i, j+1, grid[i][j]);
        
        return dp[i][j] = (1 + top + bottom + left + right)%M;
    }

    int countPaths(vector<vector<int>>& grid) {
        memset(dp, -1, sizeof(dp));
        
        int n = grid.size(), m = grid[0].size();
        if(m == 1 && n == 1)
            return 1;

        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(dp[i][j] == -1)
                    ans = (ans + dfs(grid, i, j, -1))%M;
                else 
                    ans = (ans + dp[i][j])%M;
            }
        }

        return ans;
    }
};
