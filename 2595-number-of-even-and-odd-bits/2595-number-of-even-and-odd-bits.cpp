class Solution {
public:
    
//     int binary(int num){
       
        
        
//     }
    
    
    
    
    
    vector<int> evenOddBit(int n) {
     int c1=0,c0=0;
     vector<int>ans;
        while(n){
            // int digit=0;
           
            if(n&1)ans.push_back(1);
            else ans.push_back(0);
           // ans=ans*10+digit;
            n=n/2;
        }
        
        for(int i=0;i<ans.size();i++){
            if(ans[i]==1&&i%2==0)c1++;
            else if(ans[i]==1 && i%2==1)c0++;
        }
     
        return {c1,c0};
        
        
        
    }
    
};