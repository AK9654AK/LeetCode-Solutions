class Solution {
public:
    string defangIPaddr(string address) {
       
        
        string ans;
        
        
        for(int i=0;i<address.length();++i){
           
            if(address[i]=='.')
            ans+="[.]";
            else
            ans+=address[i];
            
        } 
        
    return ans;
        
        
        // Checkout: https://www.geeksforgeeks.org/regex_replace-in-cpp-replace-the-match-of-a-string-using-regex_replace/
        
        
        
        
    }
};