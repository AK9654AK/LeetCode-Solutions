class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
//////////////Mooorees' Voting Algo///////////////
        
        int count=1;int num=nums[0];
        
        for(int i=1;i<=nums.size()-1;i++){
            if(nums[i]==num)count++;
            else count--;
            if(count==0){
                count=1;
                num=nums[i];
            }
        }
        
        int freq=0;
        for(int i=0;i<nums.size();i++)if(num==nums[i])freq++;
        if(freq>nums.size()/2)return num;
        else return -1;
    }
};