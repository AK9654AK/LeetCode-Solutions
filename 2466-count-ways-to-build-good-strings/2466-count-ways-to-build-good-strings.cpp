class Solution {
  int M = 1e9+7 ;
private:
 
 int f(int len , int zero , int one , int low , int high , vector<int> &dp){
      
      if(len>high)return 0 ;
      if(dp[len]!=-1)return dp[len];

      int z_ap =  f(len+zero , zero , one , low , high , dp)%M ;
      int o_ap =  f(len+one , zero , one , low , high , dp)%M ;
       
      if(len>=low && len<=high)return dp[len]=(1+z_ap + o_ap)%M ;
      else return dp[len]=(z_ap + o_ap)%M ;
 }
  
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high + 1 , -1);
        return f(0 , zero , one , low , high , dp);
    }
};