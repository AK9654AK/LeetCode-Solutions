class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
////////////////Prefix Sum Solution///////////////////////
    
        int hash[101]={0};
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        
        vector<int>prefix(101);
     
        prefix[0]=hash[0];
        for(int i=1;i<101;i++){
            prefix[i]=hash[i]+prefix[i-1];
        }       
        
        vector<int>abhi;
        
        for(int i=0;i<n;i++){
            int temp;
            if(nums[i]==0)temp=0;
            else{temp=prefix[nums[i]-1];}
            abhi.push_back(temp);
        }
        
        return abhi;
        
        
//           int n = nums.size();
        
//         for(int i=0;i<n;i++)
//             hsh[nums[i]+1]++;
        
//         for(int i=1;i<102;i++)
//             hsh[i]=hsh[i-1]+hsh[i];
        
//         for(int i=0;i<n;i++)
//             nums[i]=hsh[nums[i]];
            
//         return nums;
            
        
    
        
    }
};