class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int high=nums.size()-1;
        int low=0;
        int mid=0;
        
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target)return mid;
            else if(target<nums[mid])high=mid-1;
            else if(target>nums[mid])low=mid+1;
        }
        return low;
    }
};