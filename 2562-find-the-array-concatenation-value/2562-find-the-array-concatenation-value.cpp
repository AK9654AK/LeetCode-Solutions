class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        
        long long i=0;long long j=nums.size()-1;
        long long  sum=0;
        
        while(i<j){
            
            string one=to_string(nums[i]);
            string two=to_string(nums[j]);
            i++;j--;
            
            string res=one+two;
            
            long long num=stoi(res);
            
            sum+=num;
        }
        
        if(nums.size()%2==1)sum+=nums[nums.size()/2];
        
        return sum;
        
        
    }
};