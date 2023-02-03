class Solution {
public:
    string convert(string s, int numRows) {
        
        int n=numRows;
       if(n<=1)return s;
        // string str="";
        vector<string>str(n,"");
        int row=0;int step=1;
        for(int i=0;i<s.size();i++){
            str[row]+=s[i];
            if(row==0)step=1;
            if(row==n-1)step=-1;
            row+=step;
        }
        string abhi;
        for(int i=0;i<str.size();i++) abhi+=str[i];
        return abhi;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         int n=numRows;
//         string s1;string s2;string s3;
//         int ptr=0;
//         int i=0;
//         while(i<s.length()){
//             ptr=ptr%n;
            
//             if(ptr==0){
//                 s1+=s[i++];
//                 ptr++;
//             }
//             if(ptr==1){
//                 s2+=s[i++];
//                 ptr++;
//             }
//             if(ptr==2){
//                 s3+=s[i++];
//                 ptr++;
//             }
            
            
//         }
        
//         string abhi=s1+s2+s3;
            
//         return abhi;
            
            
            
            
        }
     
    
    
    
    
};