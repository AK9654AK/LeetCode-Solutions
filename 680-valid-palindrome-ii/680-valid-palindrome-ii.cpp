class Solution {
public:
    
   bool ispali(string str, int m, int n) {
    while (m <= n) {
        if (str[m] == str[n]) {
            m++;
            n--;
        } else {
            return false;
        }
    }
    return true;
}
    
    
    bool validPalindrome(string s) {
       int i=0;int j=s.size()-1;
        
        while(i<j){
            if(s[i]==s[j]){
                i++;j--;
            }
            else{
                return ispali(s,i+1,j)|| ispali(s,i,j-1);
            }
        }
        
        return true;
    }
};