class Solution {
public:
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0;int j=nums.size();int mid=0;
        while(i<j){ 
        // if in loop you are using low<high use mid,,, if low<=high then mid-1.
            mid=(i+j)/2;
            
            if(nums[mid]<target)i=mid+1;
            else if(nums[mid]>=target)j=mid;
        }
        int resl=i;
        i=0; /// nO need to start from beginning 
        j=nums.size();
        
        while(i<j){
            mid=(i+j)/2;
            
            if(nums[mid]>target)j=mid;
            else if(nums[mid]<=target)i=mid+1;
        }
        int resr=j;
        if(resr==resl)return {-1,-1};
        else return {resl,resr-1};
        
    }
};