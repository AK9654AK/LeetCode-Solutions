class Solution {
public:
    int findPeakElement(vector<int>& nums){
        // nums[-1]=INT_MIN;
        // nums[nums.size()]=INT_MIN;
       int i=0;int j=nums.size()-1;
        while(i<j){
            int mid=i+(j-i)/2;
            if(nums[mid]>nums[mid+1])j=mid;  //If element at mid is greater than element at mid+1, then answer must be itself or at its left.
            else i=mid+1;
        }
        
        return i;
        
        
    }
};