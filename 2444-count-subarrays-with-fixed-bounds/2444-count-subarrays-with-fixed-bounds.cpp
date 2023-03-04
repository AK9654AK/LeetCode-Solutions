class Solution {
public:
   long long countSubarrays(vector<int>& nums, int minK, int maxK){
    long long ans=0; 
    int j=-1; 
    int minkidx=-1;
    int maxkidx=-1;

    for(int i=0;i<nums.size();i++){
      if(nums[i]<minK||nums[i]>maxK)
        j=i;
      if(nums[i]==minK)
        minkidx=i;
      if(nums[i]==maxK)
        maxkidx=i;
      
      ans+=max(0,min(minkidx,maxkidx)-j);
    }
    return ans;
}
};