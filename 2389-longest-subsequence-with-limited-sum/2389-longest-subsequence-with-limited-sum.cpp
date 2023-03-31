class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
      int prefix[n];
        
        int sum=0;
        for(int i=0;i<n;i++){
        sum+=nums[i];
        prefix[i]=sum;
        }
        
        vector<int>abhi;
        
    
        for(int i=0;i<queries.size();i++){
            int j=0;
            while(j<n){
            if(prefix[j]<=queries[i]){j++;}else break;
            }
            abhi.push_back(j);
        }
        
        return abhi;
        
        
    }
};