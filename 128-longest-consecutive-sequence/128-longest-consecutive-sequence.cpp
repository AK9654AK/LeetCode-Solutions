class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     unordered_set<int> s;
        int N=nums.size();
      for(int i=0; i<N; i++){
          s.insert(nums[i]);
      }
      
      int ans=0;
      
      for(int i=0; i<N; i++){
          if(s.find(nums[i]-1)==s.end()){
              int count=0;
              int start=nums[i];
              while(s.find(start)!=s.end()){
                  count++;
                  start++;
              }
              
              ans=max(ans,count);
          }
      }
      
      return ans;
    }
};