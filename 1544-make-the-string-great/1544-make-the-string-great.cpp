class Solution {
public:
    string makeGood(string s) {
        if(s.size()==0)return "";
        if(s.size()==1)return s;
        
        stack<char>st;
        
        for(int i=0;i<s.size();i++){
            if(!st.empty() && abs(st.top()-s[i])==32) 
            {
                st.pop();                
            }
            else 
            st.push(s[i]);
        
            }
         
               s.clear();
    while(!st.empty()){
        
        s.push_back(st.top());
        st.pop();
    }
        reverse(s.begin(),s.end());
       return s; 
    }
};