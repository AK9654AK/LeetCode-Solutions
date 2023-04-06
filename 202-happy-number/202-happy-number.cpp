class Solution {
public:
    bool isHappy(int n) {
      
        
        int testcase=1000000;
        while(testcase--){
            int num=n;
            n=0;
            while(num){
                int digit=num%10;
                n+=digit*digit;
                num=num/10;
            }
            if(n==1)return true;
            else continue;
            
            
            
        }
        
        return false;
        
        
    }
};