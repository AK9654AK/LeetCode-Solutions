class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int abhi=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){count++;abhi=max(count,abhi);}
            else count=0;
        }
            return abhi;
        
        
    }
};