class Solution {
public:
    

    bool halvesAreAlike(string s) {
    int counter1=0;
        int counter2=0;
        int n=s.size();
        
        for(int i=0;i<n/2;i++){
            
            if(s[i]=='a'||s[i]== 'e'||s[i]== 'i'|| s[i]== 'o'||s[i]== 'u'||s[i]== 'A'||s[i]== 'E'||s[i]== 'I'||s[i]== 'O'||s[i]== 'U')counter1++;
            
        }
        
         for(int i=n/2;i<n;i++){
            
            if(s[i]=='a'||s[i]== 'e'||s[i]== 'i'|| s[i]== 'o'||s[i]== 'u'||s[i]== 'A'||s[i]== 'E'||s[i]== 'I'||s[i]== 'O'||s[i]== 'U')counter2++;
            
        }
        
        
        if(counter1==counter2) return true;
        return false;
        
        
        
        
        
        
        
        
        
    }
};