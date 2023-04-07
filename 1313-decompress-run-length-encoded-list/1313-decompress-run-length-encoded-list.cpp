class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        vector<int>abhi;
        for(int i=0;i<nums.size()-1;i=i+2){
            int temp=nums[i];
            while(temp--){
                abhi.push_back(nums[i+1]);
            }   
        }
        
        return abhi;
        
    }
};