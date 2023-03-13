class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        
        
        
        
        string ans=s;
//         for(int i=0;i<s.size();i++){
//             ans+=to_string(i);
//         }
        
        // return ans;
        
        
        for(int i=0;i<s.size();i++){
           ans[indices[i]]=s[i];       // ans[i]=s[indices[i]]; Showing Wrong output;
        }
        return {ans};
        
    }
};