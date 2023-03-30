class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        
        int minr=m;
        int minc=n;
        for(int i=0;i<ops.size();i++){
             minr=min(ops[i][0],minr);
             minc=min(ops[i][1],minc);
               //We'are trying to find the common intersection 
        }        
        return minr*minc;
        
        
            
        
        
//         int matrix[m][n]={0}   //MLE bcoz of the sizeof m and n;
        
        
//         for(int k=0;k<ops.size();i++){
//             int r1=ops[i][0];
//             int r2=ops[i][1];
        
        
        
        
//         for(int i=0;i<r1;i++){
//             for(int j=0;j<r2;j++){
//                 matrix[r1][r2]+=1
//                 }
            
//         }
//         }
        
// //         for(int i=0;i<m;i++){
// //             for(int j=0;j<n;j++){
                
// //             }
// //         }
//         return {1};
        
        
    }
};