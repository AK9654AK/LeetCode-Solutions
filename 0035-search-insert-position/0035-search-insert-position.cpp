class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        // if(target==0)return 0;
        
        
       int l=0,h=nums.size()-1;
        while(l <= h){
            int mid = l+(h-l)/2;
            if(target == nums[mid]) return mid;
            else if(target > nums[mid]) l=mid+1;
            else h=mid-1;
        }
        return l;
    }
    
        
        
        
        
        
        
        
        
    
};