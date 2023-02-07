class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        
//         vector<int>abhi(100000,0);
        
        
//         // sort(fruits.begin();fruits.end());
        
//         for(int i=0;i<fruits.size();i++){
//             abhi[fruits[i]]++;
                     
//         }
        
        
        
        
        
//         34 / 91 test cases passed.
// Status: Wrong Answer
// Submitted: 15 minutes ago
// Input:
// [3,3,3,1,2,1,1,2,3,3,4]
// Output:
// 8
// Expected:
// 5
        
        
        
        
        
        
        
        
//         sort(abhi.begin(),abhi.end(),greater<int>());
        
//         int sum=abhi[0]+abhi[1];
        
//         return sum;
        
        
        
        
//        if(fruits.size()==0)return 0;
        
//         map<int,int>abhi;
        
//         int left=0;
//         int maxi=0;
//         for(int i=fruits.size();i>=0;i--){
//             abhi[fruits[i]]++;
            
//             while(abhi.size()>2){
//                 abhi[fruits[i]]--;
//                 if(abhi[fruits[left]]==0)abhi.erase(fruits[left]);
//                 left++;
//             }
//             maxi= max(maxi,i-left+1);
//         }
//         return maxi;

         int n = fruits.size() ,ans=0 ,i=0, j=0;
       
       map<int,int>mp;
       
       while(j<n){
         // Insert fruits in basket (map) 
           mp[fruits[j]]++;
         // If our basket i.e map size is greater than 2 then we need to remove the fruit 
           while(mp.size()>2){
               mp[fruits[i]]--;
         // If frequency of any fruit equals to zero then erase element from our map     
               if(mp[fruits[i]]==0) mp.erase(fruits[i]);
               i++;
           }
         // Store maximum size of window
           ans = max(ans,j-i+1);
           j++;
       }
       return ans;
        

        
        
        
        
        
    
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
       
            
            
        }
        
    
};