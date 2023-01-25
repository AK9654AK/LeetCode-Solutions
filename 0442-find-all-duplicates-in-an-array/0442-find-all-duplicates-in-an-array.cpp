class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int>abhi;
        int count=0;
        int index=0;
        for(int i=0;i<nums.size();i++){
         index=abs(nums[i])-1;
            
        if(nums[index]>0)
         nums[index]=nums[index]*-1;
         else{
             
             
             abhi.push_back(index+1);
             
//              // swap(-nums[index],nums[count]);
//              int temp=0;int a=-nums[index]; int b=nums[count];
//               temp = a;
//                 a = b;
//               b = temp;
//              count++;
             
         }
         
        
        
        }
        
//         for(int i=0;i<nums.size()-count;i++){
            
//             nums.pop_back();
            
//         }
        
        return abhi;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // vector<int> vec;
//         sort(nums.begin(),nums.end());
//         int count=0;
//         for(int i=0;i<nums.size()-1;i++)
//             if(nums[i]==nums[i+1]){swap(nums[i],nums[count]);count++;}
        
//         for(int i=0;i<=nums.size()-count;i++){
//             nums.pop_back();
//         }
//         return nums;
    }
};