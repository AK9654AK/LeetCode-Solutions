class Solution {
public:
    int minFlipsMonoIncr(string s) {
        
        
        int n=s.size();
        int countof1=0;
        int flips=0;
        
        for(int i=0;i<n;i++){
            
            if(s[i]=='0'){
                
                flips=min(flips+1,countof1);}  //flip++; flips=min(flip,countof1);
            else if(s[i]=='1')countof1++;
            
             // https://youtu.be/dw79Uf4s3cA
        }
        
        return flips;
        
        
        
        
        
        
        
        
        
    }
};