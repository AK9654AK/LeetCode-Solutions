class Solution {
public:
    int climbStairs(int n) {
     
        
        if(n==1)return n;
        int first=1;
        int sec=2;
        
        for(int i=3;i<=n;i++){
            int third=first+sec;
            first=sec;
            sec=third;
        }
        return sec;
    }    
};