class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        
        long long mini=nums[0]; //minimum possible answer;
        long long sum=nums[0];
        
        for(int i=1;i<nums.size();i++){
            sum+=nums[i];
            
            if(nums[i]>mini){     //if curr value is greater than the mini
                int x=sum/(i+1);   //avg
                if(x>=mini){
                    
                    if(sum%(i+1))mini=x+1;// if not completely divisible 
                    
                    else mini=x; //if completely divisible;
                }
            }
        }
        
        return mini;
    }
};