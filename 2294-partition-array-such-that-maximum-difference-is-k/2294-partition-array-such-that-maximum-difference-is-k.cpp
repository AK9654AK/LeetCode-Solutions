class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {int i=0;int maximum=0;
        sort(nums.begin(),nums.end());
        int count=0;
        
        while(i<nums.size()){
            count++;
            maximum=nums[i]+k;
            while(i<nums.size() && maximum>=nums[i])i++;
        }
        return count;
        
    }
};