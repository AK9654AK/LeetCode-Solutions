class Solution {
public:
    int getLucky(string s, int k) {
        
        int sum=0;
        int digit=0;
        for(int i=0;i<s.size();i++){
            digit=(int)(s[i]-'a')+1;
           
            
            while(digit){
            sum+=digit%10;
            digit/=10;}
        }
        
        
        k--;   //Showing TLE if since sum is going outof bound for int. and hence 1st sum is calculated along with digit calculation.hence k--;
        int ans=0;
        while(k--){
            ans=0;
            while(sum){
                ans+=sum%10;
                sum/=10;
            }
            swap(ans,sum);
            
        }
        
        return sum;
        
        
    }
};