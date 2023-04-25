class Solution {
public:
    int thirdMax(vector<int>& nums) {
       
        long first=LONG_MIN;long sec=LONG_MIN;long third=LONG_MIN;
        for(auto i:nums){
            if(i==first||i==sec||i==third)continue;
            if(i>first){
                third=sec;
                sec=first;
                first=i;
            }
            else if(i>sec){
                third=sec;
                sec=i;
            }
            else if(i>third)third=i;
        
        }
        if(third==LONG_MIN)return first;
        return third;
    }
};