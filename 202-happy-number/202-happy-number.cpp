class Solution {
public:
    bool isHappy(int n) {
      
        
     
        while(n!=4 && n!=1){  //4 is the only number that does not take it to 1, and if 1, thats the answer and hence(exit out of the loop)
            int num=n;
            n=0;
            while(num){
                int digit=num%10;
                n+=digit*digit;
                num=num/10;
            }
     
        }
        
        if(n==1)return true; else return false;
    
        
        
    }
};