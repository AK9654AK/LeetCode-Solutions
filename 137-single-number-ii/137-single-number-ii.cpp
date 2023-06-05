class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones=0;
        int twos=0;
        
        for(auto x:nums){
          int res=ones^x;
            res=res&(~twos);
            ones=res;
            // res=0;
            res=twos^x;
            res=res&(~ones);
            twos=res;
        }
        
        return ones;
        
    }
};