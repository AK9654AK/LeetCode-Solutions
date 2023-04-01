class Solution {
public:
    int maximumCount(vector<int>& nums) {
    
        int cneg=0;
        int cpos=0;
        for(auto i:nums){
            if(i<0)cneg++;
            else if(i>0)cpos++;
        }
        
        return max(cneg,cpos);
        
        
    }
};