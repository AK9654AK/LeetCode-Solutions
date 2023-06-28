class Solution {
public:
     long long int mod=pow(10,9)+7;
    vector<long long int>check;
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        long long int n=nums.size();
        // vector<long long int>abhi;
        // ones.reserve(n);
        for (int i=0;i<n;i++) {
            if(nums[i]==1)check.push_back(i);
        }
        long long int size=check.size();
        if (size<=1)return size;
        long long int ans=1;
        for (int i=1;i<size;i++) {
            int cond=(check[i]-check[i-1]);
            ans=ans*cond%mod;
        }
        return ans;
    }
};