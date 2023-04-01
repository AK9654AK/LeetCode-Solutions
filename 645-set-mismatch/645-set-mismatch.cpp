class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
      
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>abhi;
        int temp=0;
        
        
        int sum=0;
        for(auto i:nums)sum+=i;
        
        int total=n*(n+1)/2;
        
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){temp=nums[i];break;}
        }
        abhi.push_back(temp);
        abhi.push_back(temp+total-sum);   
        return abhi;
        
        
       
    }
};