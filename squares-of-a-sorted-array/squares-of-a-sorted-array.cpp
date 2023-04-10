class Solution {
public:
 vector<int> sortedSquares(vector<int>& nums) {
        int i=0;int j=nums.size()-1;
        int k=j;vector <int>arr(nums.size());
        
        while(i<=j){
            if(nums[i]*nums[i]>nums[j]*nums[j]){
                arr[k]=nums[i]*nums[i];
                k--;i++;
            }
            else if(nums[j]*nums[j]>=nums[i]*nums[i]){
                arr[k]=nums[j]*nums[j];k--;j--;
            }
        }
        
        return arr;
    }

};