class Solution {
public:
    int maxDepth(string s) {
     int count=0;
        int ans=0;
        stack<char>st;
        
        
        
        for(auto i:s){
            if(i=='('){st.push(i);count++;}
            else if(i==')'){
                
                st.pop();
                 count--;
           
            }
            ans=max(count,ans);
            
            
        }
        
        
        return ans;
        
        
        
    }
};