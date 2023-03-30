class Solution {
public:
    int alternateDigitSum(int n) {
        
//         string num=to_string(n);
// 			int sum=0;
// 			for(int i=0;i<num.size();i++){
// 				if(i%2==0)sum+=num[i]-'0';
// 				else sum-=num[i]-'0';
// 			}
// 			return sum;
        
        
     
      bool check=true;
        
        int size=log10(n)+1;
        if(size%2==0)check=false;   //from right,signs will be varying
        
        // int even=0;int odd=0;
        int ans=0;
        
       while(n){
           int digit=n%10;
           n=n/10;
               if(check==true){
           ans+=digit;}
           if(check==false){
               ans-=digit;
           }
           
           check=!check;
       }
        
        
        
        return (ans);
        
    }
};