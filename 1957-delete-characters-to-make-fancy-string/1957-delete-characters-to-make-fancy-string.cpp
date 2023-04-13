class Solution {
public:
    string makeFancyString(string s) {
        
      if(s.size()<=2)return s;
        // string ans="";
    
        
        int count=0;
         char prev=s[0];
        int i=0;
        
        
        for(auto ch:s){
            if(ch==prev)count++;
            else {
                count=1;
                prev=ch;
            }
            
            if(count<=2)s[i++]=ch;
        }
        s.erase(i);
        // return ans;
        return s;
    }
};