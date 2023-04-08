class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int count=0;int res=0;
        
        for(auto i:nums){
        int num=i;
        count=0;
        while(num){
            count++;
            num/=10;
        }
            if(count%2==0)res++;
        }
        return res;
        
        
    }
};