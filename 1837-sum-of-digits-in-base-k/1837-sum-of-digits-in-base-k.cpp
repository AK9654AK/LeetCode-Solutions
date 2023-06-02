class Solution {
public:
    int sumBase(int n, int k) {
        
        int ans=0;
        while(n){
            ans+=n%k; 
            n/=k;
        }
        
//         string convertBase(int n, int k) {
//     string result = "";

//     while (n > 0) {
//         int remainder = n % k;

//         char digit = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A'); if remainder is greater than 10. It means that it in hexadecimal. 

//         result = digit + result;
//         n /= k;
//     }

//     return result;
// }

        
        return ans;
    }
};