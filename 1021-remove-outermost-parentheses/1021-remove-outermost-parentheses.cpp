class Solution {
public:
    string removeOuterParentheses(string s) {
        
        int op=0;
        int j=0;
     for(int i=0;i<s.size();i++){   
        
         if(s[i]=='(')op++;
         if(s[i]==')')op--;
         if(s[i]==')' and op==0){
             s.erase(i,1);  //last parenthesis
             s.erase(j,1);  //starting parenth
             i-=2;
             j=i+1;
         }
      
            
     }

        return s;
        
        
        
        
        
        
    }
};