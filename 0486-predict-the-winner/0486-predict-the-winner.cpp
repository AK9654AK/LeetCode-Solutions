class Solution {
  
    int total;
    bool helper(vector<int>& nums, int si, int ei, bool turn, int player1){
        if (si > ei){
            return player1 >= (total-player1);
        }
        if (turn){
            return helper(nums, si+1, ei, !turn, player1+nums[si]) || helper(nums, si, ei-1, !turn, player1+nums[ei]);
        }else{
            return helper(nums, si+1, ei, !turn, player1) && helper(nums, si, ei-1, !turn, player1);
        }
    }
public:
    bool PredictTheWinner(vector<int>& nums) {
        total = 0;
        for(int num: nums){
            total += num;
        }
        return helper(nums, 0, nums.size()-1, true, 0);
    }
};