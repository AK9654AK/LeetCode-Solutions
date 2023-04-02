class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
       
        int n=nums.size();int pairs=0;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){pairs++;i++;}
        }
        int ans2=0;
        if(pairs*2==n)ans2=0;
        else ans2=n-pairs*2;
        
       return {pairs,ans2};
    }
};