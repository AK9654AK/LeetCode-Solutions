class Solution {
public:
   vector<vector<int>> threeSum(vector<int>& nums) {
    set<vector<int>> s;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n - 2; i++) {
        int target = -(nums[i]);
        int l = i + 1;
        int r = n - 1;

        while (l < r) {
            if (nums[l] + nums[r] == target) {
                s.insert({ nums[l], nums[r], nums[i] });
                l++;
                r--;  // Fixed: decrement r separately
            } else if (nums[l] + nums[r] > target) {
                r--;  // Fixed: decrement r
            } else {
                l++;  // Fixed: increment l
            }
        }
    }

    vector<vector<int>> vec;
    for (auto x : s)
        vec.push_back(x);
    return vec;
}

};