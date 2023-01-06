class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int n=nums.size();
        
        int count=0;
        for(int i=0;i<n-1;i++){
            
            if(!(nums[i]<nums[i+1])){
                
                int diff=nums[i]-nums[i+1]+1;
                count+=(diff);
                nums[i+1]+=diff;
                
                
                
            }
        }
        
             return count;
        
        

        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};