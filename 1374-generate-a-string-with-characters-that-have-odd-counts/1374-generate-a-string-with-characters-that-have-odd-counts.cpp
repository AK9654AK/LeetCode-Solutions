class Solution {
public:
    string generateTheString(int n) {
        
        string abhi="";
        
    if(n%2==0){
        
        for(int i=0;i<n-1;i++){
            abhi+='a';
        }
        abhi+='b';
    }
    else{
        
        for(int i=0;i<n;i++){
            abhi+='a';
        }
    }
       return abhi; 
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};