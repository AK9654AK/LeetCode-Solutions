class Solution {
public:
    bool isPalindrome(int x) {
        
        int ori=x;
        long int rev=0;   //Compiler isthrowing error without long long.
        long int digit=0;   //Line 17: Char 20: runtime error: signed integer overflow: 998765432 * 10 cannot be represented in type 'int' (solution.cpp)  
        
        if(x<0)return 0;
        
        
        
        while(x>0){
            
            
            int digit=x%10;
            rev=rev*10+digit;
            x/=10;
            
            
            
            
        }
        if(rev==ori)return 1;
        return 0;
        
        
        
   
        
        
        
        
        
    }
};