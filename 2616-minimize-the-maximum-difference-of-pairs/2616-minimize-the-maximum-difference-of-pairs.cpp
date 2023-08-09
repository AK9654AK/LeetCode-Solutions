class Solution {
public:
    int findCount(int n, vector<int> nums)
    {
        int ans = 0;
        for(int i = 1; i < nums.size(); i++)
        {
            int diff = nums[i] - nums[i-1];
            if(diff <= n)
            {
                ans++;
                i++;
            }
        }
        return ans;
    }
    int minimizeMax(vector<int>& nums, int p) {
        
        sort(nums.begin(),nums.end());
        int l=0;
        int r=nums[nums.size()-1] - nums[0];
        int ans=0;
        int mid=l+(r-l)/2;
        while(l<=r)
        {
            int count=findCount(mid,nums);
            if(count>=p)
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
            mid=l+(r-l)/2;
        }
        return ans;  
    }
};
