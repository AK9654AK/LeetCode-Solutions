class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
                 
        vector<int>v;
        int t=0;
        int b=matrix.size()-1;
        int l=0;
        int right=matrix[0].size()-1;
        
        int dir=0;
        
        int i;
        
        
        
        while(t<=b && l<=right){
            
            if(dir==0){
                
                for(i=l;i<=right;i++)v.push_back(matrix[t][i]);
                t++;
                
            }
            
            else  if(dir==1){
                
                for(i=t;i<=b;i++)v.push_back(matrix[i][right]);
                right--;
                
            }   
            
            
            
            
            
            
            
            
            
            
            
            
            
            
    
            
            
            
            // https://www.youtube.com/watch?v=1ZGJzvkcLsA
            
            
            
            
            // https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbHRsY19fcExmLVVpTk9KaWpXZDAyMDRZUGFEd3xBQ3Jtc0tsLU1MajBJUlRUNFpDZGRsVlVMVkpwWTVKZUptQmR4SklsanpWSG0xOXk4b2E2akpsd2J2d1R2cThmVE8yNV9rMElIa25HVGxjMW1Qa3E3NzZxeEY2dURDSVlqa2VJcE5nNnVTQVd1UTl5UnNDQ2VNcw&q=https%3A%2F%2Fdrive.google.com%2Fopen%3Fid%3D1akKsidC1p2iSWiEP_jwUfQO-AlFLUaFS&v=1ZGJzvkcLsA
            
            
            
            
            
            
            
            
            
            
            else  if(dir==2){
                
                for(i=right;i>=l;i--)v.push_back(matrix[b][i]);
                b--;
                
            }
            
            else  if(dir==3){
                
                for(i=b;i>=t;i--)v.push_back(matrix[i][l]);
                 l++;
                
            }
            
            dir=(dir+1)%4;
            
        }
        
        return v;
        }
        
    
    
    
    
    
    
    
    
    
    
    
//         vector<int> spiralOrder(vector<vector<int>>& matrix) {
//     vector<int> res;
//     if (matrix.empty()) return res;
//     const int nx[] = {0, 1, 0, -1};
//     const int ny[] = {1, 0, -1, 0};
//     int x = 0, y = -1;
//     int m = matrix.size(), n = matrix[0].size();
//     int i = 0;
    
//     while (m > 0 && n>0) {
//         int k;
//         if (i%2 == 0) k = n, m--;
//         else k = m, n--;
            
//         while (k--) {
//             x += nx[i]; y += ny[i];
//             res.push_back(matrix[x][y]);
//         }
        
//         i = (i+1)%4; //direction
//     }
    
//     return res;
// }
// variable i control the direction of next movement, nx and ny holds the offset of next step
        
        
        
        
        
        
    
    
    
    
    
    
    
        
        
        
        
        
        
        
        
        
//         vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    
//     int T,B,L,R,dir;
//     T=0;
//     B=A.size()-1;
//     L=0;
//     R=A[0].size()-1;
//     dir=0;
//     int i;
//     vector<int> ans;
    
//     while(T<=B && L<=R)
//     {
//         if(dir==0)
//         {
//             for(i=L;i<=R;i++)
//                 ans.push_back(A[T][i]);
//             T++;
//         }
//         else if(dir==1)
//         {
//             for(i=T;i<=B;i++)
//                 ans.push_back(A[i][R]);
//             R--;
//         }
//         else if(dir==2)
//         {
//             for(i=R;i>=L;i--)
//                 ans.push_back(A[B][i]);
//             B--;
//         }
//         else if(dir==3)
//         {
//             for(i=B;i>=T;i--)
//                 ans.push_back(A[i][L]);
//             L++;
//         }
//         dir=(dir+1)%4;
//     }
//     return ans;
// }
        
        
        
    
    
    
    
//     Traverse the matrix in the spiral order by keeping four variables: rs for the first row, re for the last row, cs for the first column and ce for the last column.

// Complexity
// Time complexity: 0(n^2)
// Space complexity: 0(1)
// Code
// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int>res;
//         if(matrix.size() == 0) 
//         return res;
//         int rs = 0, re = matrix.size() - 1, cs = 0, ce = matrix[0].size() - 1;
//         while(rs <= re && cs <= ce)
//         {
//             for(int i = cs; i <= ce; i++) 
//              res.push_back(matrix[rs][i]);
//             rs++;
//             for(int i = rs; i <= re; i++) 
//              res.push_back(matrix[i][ce]);
//             ce--;
//             for(int i = ce; i >= cs && rs <= re; i--) 
//              res.push_back(matrix[re][i]);
//             re--;
//             for(int i = re; i >= rs && cs <= ce; i--) 
//              res.push_back(matrix[i][cs]);
//             cs++;
//         }
//         return res;
//     }
// };
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    
    
        
    
};
