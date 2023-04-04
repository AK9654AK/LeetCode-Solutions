class Solution {
public:
    int getMaximumGenerated(int n) {
        
        
        if(n==0 || n==1)return n;
        int nums[101];
        nums[0]=0;
        nums[1]=1;
        int maximum=1;
        for(int i=1;i<(n+1)/2;i++){
          nums[(i*2)]=nums[i];
          nums[(i*2)+1]=nums[i]+nums[i+1];
          maximum=max(max(nums[(i*2)],nums[(i*2)+1]),maximum);
        }
        
//         int maximum=0;
//         for(int i=0;i<101;i++)maximum=max(nums[i],maximum);
        
        return maximum;
    }
};