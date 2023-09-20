class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int left = 0;
        int right = nums.size();
        int minOps = INT_MAX;
        int ops = 0;
        while(left<nums.size() && x>0){
            x-=nums[left++];
            if(x==0){
                minOps = left;
                break;
            }
        }
        while(right > left && left > 0){
            x+=nums[--left];
            while(right>left && x>0){
                x-=nums[--right];
            }
            if(x==0 && left+(nums.size()-right) < minOps) minOps = left+(nums.size()-right);
        }
        if(minOps == INT_MAX) return -1;
        return minOps;
    }
};