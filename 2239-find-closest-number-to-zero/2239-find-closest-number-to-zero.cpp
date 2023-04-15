class Solution {
public:
    int findClosestNumber(vector<int>& nums) {

         
        
    // int mini=INT_MAX;
        int mini=nums[0];
        for(int i=1;i<nums.size();i++){
           // mini=min(abs(nums[i]),mini);
              if(abs(nums[i])<abs(mini) || nums[i]==abs(mini))mini=nums[i];
        }
        
        return mini;
    }
};