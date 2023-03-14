class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
         vector<int>res;
        for(int i=0;i<nums.size();i++){
            res.insert(res.begin()+index[i],nums[i]);   // This inserts the value of nums[i] into the res vector at the position specified by the iterator res.begin()+index[i]

        }
        return res;
        
        
     
    }
};