class Solution {
public:
    int minOperations(vector<string>& logs) {
        
        
        stack<string>st;
        
        for(string &i:logs){
        
            if(i=="../"){
                if(st.size()==0)continue;
                else st.pop();
            }
            else if(i=="./"){
                continue;
            }
            else st.push(i);
        }
        
        
        
        
        return st.size();
        
    }
};