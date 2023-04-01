class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int i=0;
        int m=grid.size(); //row
        int n=grid[0].size();  //col
         int j=n-1;
        int res=0;
        while(i<m and j>=0){
            if(grid[i][j]<0){
               res+=m-i;
               j--;
            }
            else i++;
        }
        
        return res;
        
        
    }
};