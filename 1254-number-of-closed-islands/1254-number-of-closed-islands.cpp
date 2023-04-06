class Solution {
public:
    
    
    
    
    void dfs(vector<vector<int>>& grid,int i,int j,int m ,int n)
{
    if(i<0 || j<0 || i>=m || j>=n || grid[i][j]!=0)
        return ;
    grid[i][j]=1;
    dfs(grid,i+1,j,m,n);
    dfs(grid,i-1,j,m,n);
    dfs(grid,i,j+1,m,n);
    dfs(grid,i,j-1,m,n);    
}
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        //boundary traversal top to bottom
        for(int i=0;i<m;i++)
        {
           int j=0;
           if(grid[i][j]==0)
                dfs(grid,i,j,m,n);
           j=n-1;
           if(grid[i][j]==0)
                dfs(grid,i,j,m,n);     
        }
        //boundary traversal from left to right
        for(int j=0;j<n;j++)
        {
            int i=0;
            if(grid[i][j]==0)
                dfs(grid,i,j,m,n);
            i=m-1;
            if(grid[i][j]==0)
                dfs(grid,i,j,m,n);    
        }
//Now counting the number of islands
        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0)
                {
                    ans++;
                    dfs(grid,i,j,m,n);
                }
            }
        }
        return ans;

    }
    
    

    
       // int closedIsland(vector<vector<int>>& grid) {
//     int r=grid.size();
//     int c=grid[0].size();

//     int count=0;

//     for(int i=1;i<r-1;i++){
//         for(int j=1;j<c-1;j++){
//             if(grid[i][j]==0){
//                 if(grid[i-1][j] and grid[i+1][j] and grid[i][j+1] and grid[i][j-1]){
//                     count++;
//                 }
//             }
//         }
//     }
//     return count;
 


};