class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        
        
        sort(nums.begin(),nums.end());
        
//         for(int i=0;i<k;i++){
        
//         }
        return nums[nums.size()-k];
    
        
        
        
        
        
    }
};