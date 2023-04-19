class Solution {
public:
    bool check(vector<int>& nums) {
        
        int count=0;
        
        int n=nums.size();
        int i=0;
        
        while(i<nums.size()){
            if(nums[(i)%n]>nums[(i+1)%n])count++;
            i++;
        }
        
        if(count<=1)return true;
        
        return false;
        
        
        
        
    }
};