class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mini1=prices[0];
        int profit1=0;
        
         int mini2=prices[0];
        int profit2=0;
        
        for(int i=0;i<prices.size();i++){
            
            mini1=min(prices[i],mini1);
            profit1=max(prices[i]-mini1,profit1);
            
            mini2=min(mini2,prices[i]-profit1);
            profit2=max(prices[i]-mini2,profit2);
            
            
            
            
            
        }
        
        return profit2;
    }
};