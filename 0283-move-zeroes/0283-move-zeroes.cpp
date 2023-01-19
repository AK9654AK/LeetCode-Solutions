class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
    
	  for(int i=0,next=0;i<nums.size();i++){
		   if(nums[i]!=0){
			swap(nums[i],nums[next++]);}

    }
        
        
//         void moveZeroes(vector<int>& nums) {
//         int n = nums.size();
//         int i = 0;
//         int j = 1;
//         while(j<n){
//             if(nums[i]==0 && nums[j]!=0){
//                 swap(nums[i],nums[j]);
//                 i++;
//                 j++;
//             }
//             else if(nums[i]==0 && nums[j]==0){
//                 j++;
//             }
//             else{
//                 i++;
//                 j++;
//             }
//         }
//     }
// };
        
        
        
        
           
//          void moveZeroes(vector<int>& nums) {
//         int i=0,j=0;
//         while(i<nums.size() && j<nums.size()){
//             if(nums[j]!=0 ){
//                 swap(nums[i],nums[j]);
//                 i++;
//                 j++;
//             }else j++;
//         }  
//     }
// };
    }
};