class Solution {
public:
    int lengthOfLongestSubstring(string s) {
            
        int i=0;int n=s.size();int j=0;
        int res=0;set<char>st;
        while(i<s.size()){
            
            auto it=st.find(s[i]);
            if(it==st.end()){
                if(i-j+1>res)res=max(i-j+1, res);
                st.insert(s[i]);
                i++;
            }else{
                st.erase(s[j]);
                j++;
                
            }
        }
        
        
        
        
        
        return res;
        
        
        
        
    }
};