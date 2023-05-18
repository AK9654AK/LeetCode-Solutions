class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int inc=0;
        int dec=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1])inc=1;
            else if(nums[i]>nums[i+1])dec=1;
             if(inc==1 and dec==1)return false;
        }
//                 int count = 1 ,flag = 1;
        
//         for (int i=1; i<n; i++)
//         {
//             if (nums[i-1]<=nums[i])
//             {
//                 count++ ;
//             }
//         }
        
//         for (int i=1; i<n; i++)
//         {
//             if (nums[i-1]>=nums[i])
//             {
//                 flag++ ;
//             }
//         }
        
        
//         if (count==n || flag==n)
//             return true ;
//         else 
//             return false ;
        
//     }
               return true;
    }
};