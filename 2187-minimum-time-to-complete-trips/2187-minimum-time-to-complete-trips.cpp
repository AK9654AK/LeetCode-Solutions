class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
    
        
        
   
        
        
        long long start=1,end=1e14;        // For end we are taking 1e14 bcz in constraint it is given that tim[i] and totalTrips is 1e7. So by choosing 1e14 our mid will be (1 + 1e14) / 2 = 1e7 which covewrs all the totalTrips in worst case i.e. 1e7.   and time doesnt become 0 it wouldnt make sense, hence start =1;
        while(start<=end) {
            long long minTimeForTotalTrips = 0;
            long long mid=start+(end-start)/2;
            for (int t:time)
                minTimeForTotalTrips += mid/t;
            if (minTimeForTotalTrips>=totalTrips)
                end=mid-1;
            else
                start=mid+1;
        }
        return start;
    }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         int ans=0;
        
//        for(int i=0;i<=k;i++){
           
//            for(int j=0;i<time.length;j++){
               
               
//            }
           
           
//        } 
        
        
        
        
        
        
        
        
        
        
        
        
    
};