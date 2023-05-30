class Solution {
public:int c=0;
    int sumOfUnique(vector<int>& nums){
        int hash[1000]={0};
        for(auto x:nums)hash[x]++;
        for(auto i=0;i<1000;i++){
            if(hash[i]==1)c+=i;
        }
        return c;
    }
};