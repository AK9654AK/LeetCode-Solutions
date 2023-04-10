class Solution {
public:
    string removeDuplicates(string s) {
   
        stack<char>stk;
        
        for(auto c:s){
           if(stk.empty()){
                stk.push(c);
            }else{
                if(stk.top()!=c)stk.push(c);
               else if(!stk.empty() && stk.top()==c) stk.pop();
               else if(stk.empty())stk.push(c);
                }
            
        }
        
        s.clear();
        
          while(!stk.empty()){
            s.push_back(stk.top());
            stk.pop();
        }
        reverse(s.begin(),s.end());
        return s;
        
        
//     stack<char> stk;
//     for(auto c:s){
//         if(!stk.empty()&& c== stk.top()){
//             stk.pop();
//         } else {
//             stk.push(c);
//         }
//     }
//     s.clear();
//     while(!stk.empty()){
//         s.push_back(stk.top());
//         stk.pop();
//     }
//     reverse(s.begin(), s.end());
//     return s;
// }
    
    
    
    
    
    }
    
    

    
    
    
    
    
    
    
    
    
            
    
    
    
    
    
    
    
    
    
    
    
    
    
};