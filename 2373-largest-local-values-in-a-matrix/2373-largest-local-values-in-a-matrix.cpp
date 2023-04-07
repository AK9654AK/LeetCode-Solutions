class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        
        
        
        
        
        
        int r=grid.size();
        
        vector<vector<int>>abhi(r-2,vector<int>(r-2));
        
        int size=abhi.size();
        
        
        for(int i=0;i<r-2;i++){
            for(int j=0;j<r-2;j++){
               
                
                int maxx=INT_MIN;
                for(int x=i;x<i+3;x++){
                    for(int y=j;y<j+3;y++){
                        maxx=max(maxx,grid[x][y]);
                    }
                }
                
                abhi[i][j]=maxx;
                
                
                
            }
        }
        
        return abhi; 
        
    }
};