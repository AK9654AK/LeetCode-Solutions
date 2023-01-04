class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int>abhi;
        
        
        
        for(int i=0;i<(nums.size())/2;i++){
            abhi.push_back(nums[i]);
            abhi.push_back(nums[i+n]);
        }
        
        
        return abhi;
        
        
        
        
        
        
    }
};