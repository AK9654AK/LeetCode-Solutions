class Solution {
public:
    bool divideArray(vector<int>& nums) {
        
        int n=nums.size();
        int hash[501]={0};
        
        for(auto x:nums)hash[x]++;
        
        for(int i=0;i<501;i++){
            if(hash[i]%2==1)return false;
        }
        return true;
    }
};