class Solution {
public:
   vector<int> spiralOrder(vector<vector<int>>& matrix) {
   int row=matrix.size();
   int col=matrix[0].size();
   vector<int> v;
   int t=0;
   int b=row-1;
   int l=0;
   int r=col-1;
   int dir=1;

   while(l<=r && t<=b){
      if(dir==1){
         for(int i=l;i<=r;i++) v.push_back(matrix[t][i]);
         t++;
         dir=2;
      }
      else if(dir==2){
         for(int i=t;i<=b;i++) v.push_back(matrix[i][r]);
         r--;
         dir=3;
      }
      else if(dir==3){
         for(int i=r;i>=l;i--) v.push_back(matrix[b][i]);
         b--;
         dir=4;
      }
      else if(dir==4){
         for(int i=b;i>=t;i--) v.push_back(matrix[i][l]);
         l++;
         dir=1;
      }
   }
   return v; 
} 

};