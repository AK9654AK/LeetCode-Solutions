class Solution {
public:
    int countAsterisks(string s) {
        int count=0;
        int n=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='|')n++;
            
            if(n%2==0){
                if(s[i]=='*')count++;
            }
        }
        return count;
        
        
        
        
        
      
        
        
//         char temp='*';
//         int count=1;
//         int ans=0;
        
//         for(int i=0;i<s.size()-1;i++){
            
//             if(s[i]=='*'&& s[i+1]=='*'){count++;
//         ans+=count;}
//             else count=0;
//         }
//         if(ans==0)return 0;
//         else return ans+1;
    }
};