class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       
//       double maximum = 0;
//     for (int i = 0; i < nums.size() - k + 1; i++) {
//         double sum = 0;
//         for (int j = i; j < i + k; j++) {
//             sum += nums[j];
//         }
//         maximum = max(maximum, sum / k);
//     }
//     return maximum;
        
        
        double sum=0; double avg=INT_MIN;
        
        
        
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        
        avg=max(avg,sum/k);
        
        for(int i=k;i<nums.size();i++){
            sum-=nums[i-k];
            sum+=nums[i];
            avg=max(avg,sum/k);
        }
        
        return avg;
        
        
    }
};