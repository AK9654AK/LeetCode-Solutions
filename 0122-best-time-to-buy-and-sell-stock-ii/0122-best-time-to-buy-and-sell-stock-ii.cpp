class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        
        int mini=prices[0];
        for(int i=0;i<prices.size();i++){
            
            if(prices[i]<mini){
                mini=prices[i];
            }
            else if(prices[i]>mini){
                profit+=prices[i]-mini;
                mini=prices[i];
            }
        
    }
        return profit;
        
    }     
};