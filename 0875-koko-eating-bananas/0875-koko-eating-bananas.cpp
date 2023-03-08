class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       
        
        int low=1,high=pow(10,9),mid=0;
       
        
        while(low<=high){
            mid=(low+high)/2;
            long long sum=0;
            for(int i=0;i<piles.size();i++) 
                sum+=ceil(1.0*piles[i]/mid);    ///   3/2 =1 while 1.0*3/2=1.5
                                               // koko need hours=sum(math.ceil(1.0*pile/k)for pile                                                   in piles) to eat up all the bananas from all piles.
            if (sum>h)
                low=mid+1;
            else
                high=mid-1;
        }
        return low;
    }
        
        
        
        
        
//         int time=0;
        
        
//         while(time<=h){
//             int m=1;
//             for(int i=0;i<piles.size();i++){
//                 time=ceil(piles[i]/)
//             }
            
            
//         }
        
        
        
        
        
        
    
};