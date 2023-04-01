class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//     int r=matrix.size();
//     int c=matrix[0].size();
//     int i=r-1;
//     int j=0;
//     while(i>=0&&j<c){
//         if(matrix[i][j]==target) {
//             return true;
//         }else if(matrix[i][j]<target)j++;
//         else i--;
//         }
//     }
//     return false;
// }
        
        
        
        
        int r=matrix.size();
        int c=matrix[0].size();
        
        if(r==0 || c==0)return false;
        
        int i=0;int j=r*c-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            int t=matrix[mid/c][mid%c];
            if(target>t)i=mid+1;
            else if(target==t)return true;
            else if(target<t)j=mid-1;
        }
        return false;
    }
    
};