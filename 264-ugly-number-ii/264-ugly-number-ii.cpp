class Solution {
public:
    
    // bool isugly(int num){
//        while(num%5)num/=5;
//         while(num%3)num/=3;
//         while(num%2)num/=2;
//         return num==1;
//     }
    
    
    int nthUglyNumber(int n) {
//         vector<int>arr(n);
//             if (n==1)return 1;
//         int i=1;
//         while(arr.size()<n){
            
//             if(isugly(i)){arr.push_back(i);}
//             i++;
           
//         }
 
//         return arr[arr.size()-2];
        
        
        vector<int>dp(n);
        dp[0]=1;
        int x=0;int y=0;int z=0;
        
        for(int i=1;i<n;i++){
            dp[i]=min(dp[x]*2,min(dp[y]*3,dp[z]*5));
            
            if(dp[i]==2*dp[x])x++;
            if(dp[i]==3*dp[y])y++;
            if(dp[i]==5*dp[z])z++;
        }
        
        
        return dp[n-1];
        
        
        
    }
};