class Solution {
public:
    int balancedStringSplit(string s) {
        int l=0,r=0;
        int ans=0;
        int n=s.size();
        int i=0;
        
        while((n)--){
            if(s[i]=='R')r++;
            if(s[i]=='L')l++;
            if(r==l){
                ans++;
                l=0;
                r=0;
            }
            i++;
            
        }
        return ans;
        
        
        
        
    }
};