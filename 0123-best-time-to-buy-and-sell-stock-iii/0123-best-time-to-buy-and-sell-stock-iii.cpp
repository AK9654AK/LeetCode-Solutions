class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       int min1=INT_MAX;
        int min2=INT_MAX;
        int profit1 = 0, profit2 = 0;
        
        for(int price: prices){
            min1 =min(min1, price);
            profit1 = max(profit1, price-min1);
            
            min2 = min(min2, price-profit1);
            profit2 = max(profit2, price-min2);
        }
        return profit2;
    }
};