class Solution {
public:
    string addBinary(string a, string b) {
        
//         int n=a.size();
//         int numa=0;
//         while(n--){
            
//             numa+=a[n]*10;
            
            
//         }
        
//         int m=b.size();
        
//         int numb=0;
        
//         while(m--){
            
//             numb+= b[m]*10;
            
            
//         }
        
//         int total=numa+numb;
        
//         string ans;
 
    
//     int i = 0;
//     while (total>0) {
 
    
//          ans[i++]=total%2;
//         total=total/2;
        
//     }
 
//     return ans;
// }
        
        
        string res;
        
        
        int i = a.length() - 1;
        int j = b.length() - 1;  //Starting from end;
        
        
        int carry = 0;
        while(i >= 0 || j >= 0){
            
            int sum=carry;
            if(i >= 0) sum += a[i--]-'0';      //converting it from char to int 
            if(j >= 0) sum += b[j--]-'0';
            carry = sum > 1 ? 1 : 0;
            res += to_string(sum % 2);
        }
        if(carry) res += to_string(carry);
        reverse(res.begin(), res.end());
        return res;
    }
        
    
            
    
};