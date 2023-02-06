class Solution {
public:
    double myPow(double x, int n) {
        
     
         if(n==0)
            return 1;
        if(n==INT_MIN)
        {
            x*=x;
            n/=2;
        }
        if(n<0)
        {
            n=-n;
            x= 1/x;
        }
        if(n%2==0)
            return myPow(x*x, n/2);
        else
            return x*myPow(x*x, n/2);
                
        
//         
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         if(x==1)return 1;
        
        
//         double num=1.0;
//         for(double i=1;i<=abs(n);i++){
//             num=x*num;   
//         }
//             if(n<0)return 1/num;
//             else return num;
            
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};