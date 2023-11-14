class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
//////////////Mooorees' Voting Algo///////////////
        
        int count=1;int num=nums[0];
        
        
        for(auto i:nums){
            if(i==num)count++;else count--;
            if(count==0){
                num=i;
                count=1;
            }
        }
        int freq=0;
        for(auto i:nums){
            if(i==num)freq++;   
        }
        if(freq>nums.size()/2)return num;
        return -1;
    }
};