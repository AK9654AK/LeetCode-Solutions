class Solution {
public:
    int findLucky(vector<int>& arr) {
        int hash[501]={0};
        
        for(auto i:arr){
            hash[i]++;
            
        }
        int ans=-1;
        
        for(int i=1;i<501;i++)if(hash[i]==i)ans=i;
        return ans;
    }
};