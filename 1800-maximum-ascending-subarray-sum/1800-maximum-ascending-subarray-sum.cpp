class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        
        if(nums.size()==1)return nums[0];
        
        int sum=nums[0];
        int totalsum=0;
        for(int i=1;i<nums.size();i++){
            
            if(nums[i]<=nums[i-1]){
                 totalsum=max(sum,totalsum);
                sum=0;
            }
           sum+=nums[i];
            
        }
        return max(totalsum,sum);
    }
};