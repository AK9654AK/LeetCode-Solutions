class Solution {
public:
   int peakIndexInMountainArray(vector<int>& arr) {
        int m = -1;
        int j = -1;
        for(int i = 0 ; i < arr.size(); i++){
            if(arr[i]>m){
            m = max(m,arr[i]);
            j = i;
            }
            else break;
        }
        return j;
    }
};