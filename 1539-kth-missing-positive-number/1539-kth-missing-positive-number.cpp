class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int l=0,r=arr.size();
        while(l<r){
            int mid=(l+r)/2;
            if(arr[mid]-(mid+1)<k)
                l=mid+1;
            else
                r=mid;
        }
        return l+k;
        
        
        
        //////Its not a easy question tho
        
        
        
        
        
        
        
        
        
        
        
        
//         int n=arr.size();
//         int stop=arr[n-1];
//         vector<int>abhi(k);
//         int j=1,i=0;
//         while(i<stop){
            
            
//             // if(i>n){
//             //     abhi.push_back(j);
//             //     j++;
//             //     i++;
//             // }
                                           // ?????////? We have to solve this in O(log n ) hahahahhaah
//             if(arr[i]!=j){
//                 abhi.push_back(j);
//                 j++;
                
//             }
//             else{
//                 j++;
//                 i++;
//             }
            
//         }
        
        
//         return abhi[k];
        
        
        
// //         int last2=last;
// //         abhi.push_back(last);
        
// //         for(int i=1;i<1000;i++){
            
// //             abhi.push_back(last2+i);
// //         }
        
// //         // return abhi[k+1];
        
        
        
    }
};