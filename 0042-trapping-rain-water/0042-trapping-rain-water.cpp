class Solution {
public:
    int trap(vector<int>& height) {
        
        
        
         int l = 0, r = height.size() - 1, water = 0, minHeight = 0;
        while (l < r) {
            while (l < r && height[l] <= minHeight) {
                water += minHeight - height[l++];
            }
            while (l < r && height[r] <= minHeight) {
                water += minHeight - height[r--];
            }
            minHeight = min(height[l], height[r]);
        }
        return water;
        
        
        
    }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        /////GFG Solution from course(not working here)
        
//         int n=height.size();
//          int res=0;
//       for(int i=1;i<n;i++){
          
//           long long res=0;int lmax[n];
//           int rmax[n];
          
//           lmax[0]=height[0];
//           for(int i=1;i<n;i++)
//             lmax[i]=max(height[i],lmax[i-1]);
          
//           rmax[n-1]=height[n-1];
//           for(int i=n-2;i>=0;i--)
//             rmax[i]=max(height[i],rmax[i+1]);
          
          
//           for(int i=1;i<n-1;i++){
              
//               res=res+min(lmax[i],rmax[i])-height[i];
              
//           }
//       }
//           return res;
        
        
      
//       }
        
    
};