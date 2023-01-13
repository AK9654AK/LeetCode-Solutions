class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        
        int r=mat.size();
        int c=mat[0].size();
        int sum=0;
        
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i==j || i+j==c-1)sum+=mat[i][j];
                
                // if(i+j==r-1)sum+=mat[i][j];
                
                
                
            }
        }
        
        // sum-=mat[r/2][r/2];
        return sum;
        
        
    //       int diagonalSum(vector<vector<int>>& mat)
    // {
    //     int x = 0, y = 0, n = mat.size();
    //     for(int i = 0 ; i < n ; ++i )
    //     {
    //         x += mat[i][i];//Primary
    //         y += mat[i][n - i - 1];//Secondary
    //     }
    //     if(n%2==0)
    //         return x+y;
    //     return x+y-mat[n/2][n/2];//Removes the central element as we have added it twice
    // }
        
        
        
        
        
        //O(N2)
        
        
        
//         int m=mat.size();
// int n=mat[0].size();
// int sum=0;

//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if( (i==j) || (i+j)== m-1){
//                 sum+=mat[i][j];
//             }
//         }
//     } 
    
//     return sum;
// }
// };

        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};