class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
    int n=nums.size();
    vector<int>prefix(n);
    prefix[0]=nums[0];
    for(int i=1;i<n;i++){
        prefix[i]=nums[i]+prefix[i-1];
    }
        
    int total=prefix[n-1];
    int lsum=0;
    int rsum=0;
    for(int i=0;i<n;i++){
        lsum=prefix[i]-nums[i];
        rsum=total-prefix[i];
        if(lsum==rsum){
            return i;
            break;
        }
    }
    return -1;
}
};