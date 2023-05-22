class Solution {
public:
    bool isValid(string s) {
        
        
        
          
    if(s.size() % 2 == 1) return false;
    stack<char> st;
    for(auto i : s) {
        if(i == '(' || i == '[' || i == '{') st.push(i);
        else {
            if(st.empty()) return false;
            if(i == ')' && st.top() != '(') return false;
            if(i == '}' && st.top() != '{') return false;  
            if(i == ']' && st.top() != '[') return false;
            st.pop();
        }
    }
    return st.empty();
}
};