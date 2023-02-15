class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
//         vector<int>abhi;
//         long long int ans=0;
//         for(int i=0;i<num.size();i++){
            
//            ans+=num[i]*10;
            
//         }
//         ans=ans+k;
        
//         while(ans){
//             abhi.push_back(ans%10);
//             ans/10;
            
//         }
//         return abhi;
        
          for(int i=num.size()-1;i>=0;i--) {
      num[i]+=k;
      k=num[i]/10;
      num[i]%=10;
    }
    while(k>0){
      num.insert(begin(num),k%10);
      k/=10;
    }
    return num;
  }
        
        
        
    
};