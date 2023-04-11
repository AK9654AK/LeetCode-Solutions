class Solution {
public:
    string removeStars(string s) {
        
        
        int j=0;
       for(auto i=0;i<s.size();i++){
           if(s[i]=='*')j--;
           else{s[j]=s[i]; 
               j++;}
       }
        
        s.resize(j);
        return s;
        
   
//         stack<char>st;
        
//         for(auto x:s){
//             if(x=='*')st.pop();
//             else st.push(x);
//         }
               
//                s.clear();
               
//                while(!st.empty()){
//                 s.push_back(st.top());
//                    st.pop();
//                }
//         reverse(s.begin(),s.end());
//         return s;
    }
};