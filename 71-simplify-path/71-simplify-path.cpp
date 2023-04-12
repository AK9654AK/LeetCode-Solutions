class Solution {
public:
    string simplifyPath(string path) {
        
        stack<string> st;
        for(int i=0;i<path.size();i++)
        {
            if(path[i]=='/')continue;
            string s;
            while(i<path.size()&&path[i]!='/')
            {
                s+=path[i];
                i++;
            }
            if(s==".")continue;
            else if(s=="..")
            {
                if(!st.empty())
                    st.pop();
            }
            else st.push(s);
        }
        
        path.clear();
        while(!st.empty())
        {
            path='/'+st.top()+path;
            st.pop();
        }
        if(path.size()==0)path+='/';
            
        return path;
    }
};