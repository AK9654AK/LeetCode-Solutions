class Solution {
public:
    int func(vector<int>& nums1, vector<int>& nums2, int i, int j, int n, int m, vector<vector<int>>& dp){
        if(i==n or j==m){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans1=nums1[i]*nums2[j]+func(nums1,nums2,i+1,j+1,n,m,dp);
        int ans2=func(nums1,nums2,i+1,j,n,m,dp);
        int ans3=func(nums1,nums2,i,j+1,n,m,dp);
        return dp[i][j]=max(ans1,max(ans2,ans3));
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int flag=0;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int ans=func(nums1,nums2,0,0,n,m,dp);
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        if(nums1[0]*nums2[0]<0 and nums1[n-1]*nums2[m-1]<0){
            return max(nums1[0],nums2[0])*min(nums1[n-1],nums2[m-1]);
        }
        return ans;
    }
};