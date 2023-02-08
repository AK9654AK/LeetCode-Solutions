class Solution {
public:
    int jump(vector<int>& nums) {
        
        
        int jumps=0;int intr=0;int range=0;

     for(int i=0;i<nums.size()-1;i++) {

             range=max(range,i+nums[i]); 
            if(i==intr) {jumps++;
           intr=range; 
                        }
         
         }
return jumps; 



     
                
        
        
                
        


        
        
        
        
        
        
        
        
        
        
        
        
    }
};