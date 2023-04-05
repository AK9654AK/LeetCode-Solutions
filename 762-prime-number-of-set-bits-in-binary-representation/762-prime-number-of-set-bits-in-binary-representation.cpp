class Solution {
public:
    
    bool prime(int num){
    if(num<2) return false;
    for(int i=2;i*i<=num;i++){
        if(num%i==0)return false;
    }
    return true;
}
    
    int countPrimeSetBits(int left, int right) {
        
        int res=0;
        
        for(int i=left;i<=right;i++){
            int count=0;
            int n=i;
            while(n){
                n=n&(n-1);
                count++;
            }
            
        if(prime(count))res++;
            
   
        }
        
        
        
        
        return res;
        
        
    }
};