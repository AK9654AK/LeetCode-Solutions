class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums){
            if(x%2==0)mp[x]++;
        }
        int maxi=-1;int res=-1;
        for(auto [key,val]:mp){
            if(val>maxi){
                res=key;
                maxi=val;
            }
        }
        
        return res;
    }
};