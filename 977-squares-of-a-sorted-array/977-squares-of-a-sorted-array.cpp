class Solution {
public:
 vector<int> sortedSquares(vector<int>& nums) {
      
     vector<int>arr(nums.size());
     int k=nums.size()-1;
     int i=0;int j=nums.size()-1;
     while(i<=j){
         long long int sqi=nums[i]*nums[i];
         long long int sqj=nums[j]*nums[j];
         if(sqi>=sqj){arr[k]=sqi;i++;k--;}
         else if(sqj>sqi){arr[k]=sqj;k--;j--;}
     }
     
     
     
     return arr;
    }

};