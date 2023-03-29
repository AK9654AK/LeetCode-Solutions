class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        
        
        
        
     
        int hash[82]={0};
        int result;
        for(int i=lowLimit;i<=highLimit;i++){
            result=0;
            int digit=i;
            while(digit){
                
                result+=digit%10;
                digit/=10;
                
            }
            
            hash[result]++;
            
            
        }
        
        int res=0;
        for(int i=0;i<82;i++){
            res=max(res,hash[i]);
            
            
        }
        return res;}
    
};