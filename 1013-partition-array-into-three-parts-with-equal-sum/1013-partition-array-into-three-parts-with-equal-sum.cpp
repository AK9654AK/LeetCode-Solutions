class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        int res=0;
        int currsum=0;
        if(sum%3!=0)return false;int i=0;
        for(int i=0;i<arr.size();i++){
            currsum+=arr[i];
            if(currsum==sum/3){res++;currsum=0;}
            }
        return res>=3;
    }
};