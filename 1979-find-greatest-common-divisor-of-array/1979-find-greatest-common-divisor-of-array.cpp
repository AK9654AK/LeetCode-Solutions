class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        int lar=*max_element(nums.begin(),nums.end());
        int small=*min_element(nums.begin(),nums.end());
        
        int abhi=0;
        
        for(int i=1;i<1001;i++){
            if(lar%i==0 && small%i==0)abhi=i;
        }
        return abhi;
    }
};