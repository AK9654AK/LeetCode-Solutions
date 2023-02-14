class Solution {
public:
    int strStr(string haystack, string needle) {
        
        
        
        int m=needle.size();
    int n=haystack.size();

   
    for (int i=0;i<=n-m;i++) {
        int j;

        for (j=0;j<m;j++)
            if(haystack[i+j]!=needle[j])
                break;
        if (j==m) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
            return i;
    }
        
        
        
       return -1;
    }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         if(needle.size()>haystack.size())return -1;
        
//         int n=haystack.size();
//         int ans;
//         int i=0;int j=0;
//         bool flag=0;
//         while(i<n){
            
//             if(haystack[i]==needle[j]){
//                 if(flag==0)ans=i;
//                 flag=1;
//                 i++;
//                 j++;
                
                
//             }
//             if(j==needle.size())return ans;
//             j=0;
//             i++;
//             flag=0;
            
            
            
            
            
            
            
//         }
        
        
//         return -1;
        
        
        
        
        
        
    
};