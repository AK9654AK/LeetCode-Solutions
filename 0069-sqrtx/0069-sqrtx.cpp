class Solution {
public:
    int mySqrt(int x) {
        
        
        if(x==0||x==1)return x;
        
        long long int i=1;int result=1;
        
          // Starting from 1, try all numbers until
	// i*i is greater than or equal to x.
        while(i*i<=x){
            i++;
            
            
        }
        return (i-1);
        
        
        
        
        
        
        
        
        
        
        
//         int  r = x;
//     while (r*r > x)
//         r = (r + x/r) / 2;
//     return r;
    
        
        
//     int mySqrt(int x) {
//         int low = 0,  high = x, mid;
//         if(x<2) return x; // to avoid mid = 0
//         while(low<high)
//         {
//             mid = (low + high)/2;
//             if(x/mid >= mid) low = mid+1;
//             else high = mid;
//         }
//         return high-1;
        
//     }    
        
        }
    
};