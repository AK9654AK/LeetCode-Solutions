class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       
        int profit=0;
        
        int minimum=INT_MAX;
        
        for(int i=0;i<prices.size();i++){ 
            
            
            
            ///https://www.youtube.com/watch?v=eMSfBgbiEjk
            
            
            
            
            

            
            
            
            ////////////////The idea is quite simple, we’ve to find the max profit by selling the stocks.
// We took 2 int variables: mn (to store the minimum till a particular date) & ans.
// Run a for loop and in every time check for the minimum value till that iteration and store it in mn ~min(mn, prices[i]).
// Also, find the ans with max(ans, prices[i]-mn).
// Time complexity: O(n).
            
            
            
            
           minimum=min(prices[i],minimum);
            profit=max(profit,(prices[i]-minimum));
        }
        return profit;
    }
};