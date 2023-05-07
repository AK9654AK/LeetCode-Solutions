class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
       
        
        
//         vector<int>temp;
//         vector<int>temp2;
//         int k=0;int j=0;
        
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]<0)temp.push_back(nums[i]);
//             if(nums[i]>0)temp2.push_back(nums[i]);
//         }
        
        
//         nums.clear();
//         for(int i=0;i<temp.size();i++){
//             nums.push_back(temp2[j++]);
//             nums.push_back(temp[k++]);            
//         }
        
        
//         return nums;
        
        vector<int>ans(nums.size(),0);
        
        int indp=0;int indn=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[indp]=nums[i];
                indp+=2;
            }
            if(nums[i]<0){
                ans[indn]=nums[i];
                indn+=2;
            }
        }
        
        return ans;
        
        
        
        
    }
};