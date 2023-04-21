class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        
        // nums.sort(nums.begin(),nums.end());
        
        nums.erase(unique(nums.begin(),nums.end() ),nums.end());
        return nums.size();

    }
};