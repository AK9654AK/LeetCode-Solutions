class Solution {
public:
    int reverse(int x) {
        

        
        int y=0;
    
        
        while(x!=0){
            
            if(y>INT_MAX/10 || y<INT_MIN/10){   // To check if it is overflowing..
                return 0;
            }
            else{
            
                
                
                y=y*10+x%10;
                
                x=x/10;
            }
        }
        return y;
    }
        
        
    
    
    
        
        
        
        
        // int reverse(int x) {
//     long result = 0;
//     while(x != 0)
//     {
//         result = result*10 + x % 10;
//         x /= 10;
//     }
//     return (result > INT_MAX || result < INT_MIN)? 0 : result;
// }
    
    
    
    
    
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         int y=0;
        
//         if(y>INT_MAX/10 || y<INT_MIN/10){
//                 return 0;
        
        
        
//         int m=x;  //To check if the given integer is negative or not;
        
        
//         string str=to_string(x);
        
        
//         int len = str.length();
//     int n = len-1;
//     int i = 0;
//     while(i<=n){
//                      //Using the swap method to switch values at each index
//         swap(str[i],str[n]);
//         n = n-1;
//         i = i+1;
//   }
        
        
//         x=stoi(str);
        
        
//         if(m<0)
//         return -x;
        
//         return x;
//     }
};