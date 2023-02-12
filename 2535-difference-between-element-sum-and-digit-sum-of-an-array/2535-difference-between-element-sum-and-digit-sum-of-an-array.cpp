class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        
        int esum=0,dsum=0;
        for(auto it:nums)
        {
            esum+= it;
            while(it)
            {
                dsum+=it%10;
                it/=10;
            }
            
        }
        return abs(esum-dsum);
        
        
        
        
        
        
        
        
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};