class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        
        int hash[201]={0};
        for(auto x:nums){
            hash[x]++;
        }
        
        int res=0;
        for(int i=k+1;i<201;i++){
            res+=hash[i]*hash[i-k];
            
            
        }
        
        
        return res;
        
        
    }
};