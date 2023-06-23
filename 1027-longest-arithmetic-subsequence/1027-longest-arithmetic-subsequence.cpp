class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
       int n=nums.size();
        int maxi=0;

        vector<vector<int>> mp(n,vector<int>(1001,0));
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                mp[i][nums[i]-nums[j]+500]=1+mp[j][nums[i]-nums[j]+500];
                maxi=max(maxi,mp[i][nums[i]-nums[j]+500]);
            }
        }
        return  maxi+1;
    }
};