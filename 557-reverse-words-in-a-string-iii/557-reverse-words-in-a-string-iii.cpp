class Solution {
public:
    string reverseWords(string s) {
        
        int i=0;
        
        for(int j=0;j<s.size()+1;j++){
            if(s[j]==' '|| j==s.size()){
                reverse(s.begin()+i,s.begin()+j);
                i=j+1;
            }
        }
        
        // reverse(s.begin(),s.end());
        return s;
            
     
        
        
    }
};