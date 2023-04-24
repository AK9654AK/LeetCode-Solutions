class Solution {
public:
    vector<int> evenOddBit(int n) {
        
        int co=0;int ce=0;int i=0;
        while(n){
            
            if(i%2==0 and (n&1)==1)ce++;
            else if(i%2==1 and (n&1)==1)co++;
            
            i++;
            n=n>>1;
            
        }
        
        return {ce,co};
        
        
        
    }
};