class Solution {
public:
  int deleteGreatestValue(vector<vector<int>>& grid) {
   int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        int temp=0;

        for(int k=0;k<m;k++){
            for(int i=0;i<n;i++){
                int maxi=0;
                for(int j=0;j<m;j++){
                     if(grid[i][j]>maxi){
                        swap(grid[i][j],maxi);
                       
                    }
                }
                temp=max(maxi, temp);
                
            }
            
            ans=ans+temp;
            temp=0;
        }
        return ans;
}

};