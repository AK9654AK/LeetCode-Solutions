class Solution {
public:
    int minimizeSum(vector<int>& nums) {
//         int mini=INT_MAX;
//         int maxi=INT_MIN;
        
//         int maxele=*max_element(nums.begin(),nums.end());
//         auto i=find(nums.begin(),nums.end(),maxele);
//         *i=1;
//          int minele=*min_element(nums.begin(),nums.end());
//         auto it=find(nums.begin(),nums.end(),minele);
//         *it=1;        
        
//         for(int i=0;i<nums.size()-1;i++){
//             for(int j=i+1;j<nums.size();j++){
//                 mini=min(abs(nums[i]-nums[j]),mini);
//                 maxi=max(abs(nums[i]-nums[j]),maxi);
                
//             }
//         }
//     return mini+maxi;
       
        int i,n=nums.size();
        sort(nums.begin(),nums.end());
        return min({nums[n-1]-nums[2],nums[n-3]-nums[0],nums[n-2]-nums[1]});
    
    
    }
};