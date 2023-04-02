class Solution {
public:
    string largestOddNumber(string num) {

        
      int n=num.size();  
        
        for(int i=n-1;i>=0;i--)if(num[i]%2==0)num.pop_back();else break;
        return num;
    
//         for(int j=n;j!=0;j--){
//             int i=0;
//             ans="";                   //Second attempt
//             while(i!=j)ans+=(num[i++]);
//             if(stoi(ans)%2==1)return ans;
            
//         }
        
        
        
        //1st attempt 
        
//         if(num[num.size()-1]=='0')size=n-1;
//         int i=0;
        
//         while(i<=size){
//             if((num[i]-'0')%2==1){
//                 ans+=num[i];i++;
//             }
//             if((num[i]-'0')==0){ans+=num[i];i++;}
//             i++;
//         }
        
    }
};