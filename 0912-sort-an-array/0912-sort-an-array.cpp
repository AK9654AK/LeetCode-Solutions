class Solution {
public:
    
    void shellSort(vector<int>&nums, int n)
    {
        // Shell sort
        for(int gap=n/2;gap>=1;gap/=2)
        {
            
            for(int i=gap;i<n;i++)
            {
               int key=nums[i];
               int j=i-gap;
               while(j>=0&&nums[j] > key)
               {
                   nums[j+gap]=nums[j];
                   j=j-gap;
               }
               nums[j+gap]=key; 
            }
        }
    }
   
    vector<int> sortArray(vector<int>& nums) {
        if(nums.size()<2)return nums;
        shellSort(nums,nums.size()); 
        return nums;
    }
};