class Solution {
public:
    
    int rev(int n){
        int rev=0;
        while(n){
            int digit=n%10;
            rev=rev*10+digit;
            n=n/10;
        }
        
        return rev;
    }
    
    
    bool isSameAfterReversals(int num) {
        
        int numb=num;
        numb=rev(numb);
        numb=rev(numb);
        
        return numb==num;
        
        
        
    }
};