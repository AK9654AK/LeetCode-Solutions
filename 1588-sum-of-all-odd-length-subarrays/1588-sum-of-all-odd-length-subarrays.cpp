class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
     // https://www.youtube.com/watch?v=LSFcmgq0HYY
        int sum=0;
        int left, right,total,odd;
        for(int i=0;i<arr.size();i++) {
            left=i+1;    
            right = arr.size()-i; 
            total=left*right;  
            odd=(total+1)/2; 
            sum+=odd*arr[i];
        }
        return sum; 
    }
};