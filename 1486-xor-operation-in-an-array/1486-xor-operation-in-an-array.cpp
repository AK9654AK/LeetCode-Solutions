class Solution {
public:
    int xorOperation(int n, int start) {
      int res = 0;
        
    
    while(n--) {
        res = res ^ start;
        start+=2;   
    }
    return res;
        
//         int arr[n];
//         for(int i=0;i<n;i++){
//             arr[i]=start;
//             start+=2;
//         }
//        int res=arr[0];
        
        
//         for(int i=0;i<n;i++){
//             res^=arr[i];
//         }
        
        return res;
        
    }
};