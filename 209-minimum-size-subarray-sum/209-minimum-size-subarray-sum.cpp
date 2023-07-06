class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX, total = 0, p1 = 0, p2 = 0, n = nums.size();
        while(p2<nums.size()){
            total += nums[p2];
            while(total>=target){
                ans = min(ans, p2 - p1 + 1);
                total -= nums[p1];
                p1++;
            }
            p2++;
        }

        return ans == INT_MAX ? 0:ans;
    }
};