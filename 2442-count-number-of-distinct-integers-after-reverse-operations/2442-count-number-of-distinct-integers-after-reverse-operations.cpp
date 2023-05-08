class Solution {
public:
    
    int rev(int num){
        int n=0;
        while(num){
            n=n*10+num%10;
            num=num/10;
        }
        return n;   
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(rev(nums[i]));
        }
        
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        
        
        
       return nums.size(); 
    }
};