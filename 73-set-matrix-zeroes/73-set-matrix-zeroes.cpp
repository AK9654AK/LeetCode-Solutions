class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        
        // vector<int>v(200);
        vector<bool>row(r,false);
        vector<bool>col(c,false);
        
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){row[i]=true;col[j]=true;}
            }
        }
        
          for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(row[i]==1|| col[j]==1){matrix[i][j]=0;}
            }
        }
        
        
        
        
        
    }
};