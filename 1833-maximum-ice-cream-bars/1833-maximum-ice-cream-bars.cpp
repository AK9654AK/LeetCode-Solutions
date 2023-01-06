class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        int count=0;
        int n=costs.size();
        
        
        sort(costs.begin(),costs.end());
        
        
        for(int i=0;i<n;i++){
            
            if(coins>=costs[i]){
                     count++;
                     coins-=costs[i];
                     
            }
            
        }
        return count;
        
    }
};