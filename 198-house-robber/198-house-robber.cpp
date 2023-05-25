class Solution {
public:
    int rob(vector<int>& nums) {
     int n = (int)nums.size();
      int cur , prev, prev_two;
      cur = prev = max(nums[0] , 0);
      int take , notTake;
      for (int i = 1; i < n; i++) {
        take = i > 1 ? nums[i] + prev_two : nums[1];
        notTake = prev;
        cur = max(take , notTake);
        prev_two = prev;
        prev = cur;
      }
      return cur;
       
    }
};