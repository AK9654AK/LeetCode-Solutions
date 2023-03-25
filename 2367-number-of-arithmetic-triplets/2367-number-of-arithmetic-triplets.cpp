class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
          int ans=0;
        for(int i=0;i<=nums.size()-3;i++)
        {
            int start=i+1;
            int end = nums.size()-1;
            while(start<end)
            {  
                if(nums[start]-nums[i]==diff and nums[end]-nums[start]==diff)
                {
                    start++;
                    end--;
                    ans++;
                } 
               if((nums[start]-nums[i])<diff) 
               {
                   start++;
               }
                else
                if((nums[end]-nums[start])>diff)
                {
                    end--;
                }
                else break;
                     
            }
        }
        return ans;
    }
};