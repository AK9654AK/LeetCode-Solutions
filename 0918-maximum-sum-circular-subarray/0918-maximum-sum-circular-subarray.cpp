class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
         
        int total = 0, maxsum = INT_MIN, curmax = 0, minsum = INT_MAX, curmin = 0;
    for (int i=0;i<nums.size();i++) {
        curmax = max(nums[i], curmax + nums[i]);  //update the current max subarray sum
        maxsum = max(maxsum, curmax); //update the overall max subarray sum
        curmin = min(nums[i], curmin + nums[i]);  //update the current min subarray sum
        minsum = min(minsum, curmin); //update the overall min subarray sum
        total += nums[i];
    }
    if(maxsum>0) return max(maxsum,total-minsum);
        else return maxsum;  //when negative
            
    }
};