class Solution {
public:
bool check(vector<int>& nums, int st, int end) {
    int size=end-st+1;
    if (size<2){
        return false;
    }
    vector<int>arr(nums.begin()+st,nums.begin()+end+1);
    sort(arr.begin(),arr.end());
    int diff = arr[1]-arr[0];
    for (int i=2;i<size;i++) {
        if (arr[i]-arr[i-1]!=diff){
            return false;
        }
    }
    return true;
}

vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
    vector<bool>res(l.size());
    for (int i=0;i<l.size();i++){
        res[i]=check(nums,l[i],r[i]);
    }
    return res;
}


};