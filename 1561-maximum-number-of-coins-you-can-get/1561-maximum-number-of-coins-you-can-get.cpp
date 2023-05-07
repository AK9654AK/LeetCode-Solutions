class Solution {
public:
    int maxCoins(vector<int>& piles) {
        if(piles.size()==0)return 0;
        
        sort(piles.begin(),piles.end());
        int i=0;int ans=0;
        int n=piles.size();
        
        for(int i=n/3;i<n;i+=2){
            ans+=piles[i];
        }
        
        return ans;
    }
};