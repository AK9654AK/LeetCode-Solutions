class Solution {
public:
    
    vector<int>abhi;
    
    Solution(vector<int>& nums) {
        abhi=nums;
    }
    
    int pick(int target) {
        int ran=rand()%abhi.size();
        // if(abhi[ran]==target)return ran;
        while(abhi[ran]!=target){
        int ran=rand()%abhi.size();
        if(abhi[ran]==target)return ran;
        }
        return ran;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */