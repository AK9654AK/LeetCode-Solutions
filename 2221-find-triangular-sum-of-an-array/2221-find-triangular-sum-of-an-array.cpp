class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        if(nums.size()==0)return 0;
        if(nums.size()==1)return nums[0];
        vector<int> arr;
        
        while(nums.size()>1 || arr.size()>1){
            
            for(int i=0;i<nums.size()-1;i++){
                arr.push_back((nums[i]+nums[i+1])%10);
                
            }
            nums.clear();
            
            for(int i=0;i<arr.size()-1;i++){
                nums.push_back((arr[i]+arr[i+1])%10);
            }
            
            arr.clear();
        }
        
        if(nums.size()==1)return nums[0];
    return arr[0];
        
        
    }
};