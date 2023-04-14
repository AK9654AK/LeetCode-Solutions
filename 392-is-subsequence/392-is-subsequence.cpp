class Solution {
public:
    bool isSubsequence(string s, string t) {
        
//         int idx=0;
//         for(auto x:s){
//             idx=t.find(x,idx);
//             if(idx=-1)return false;
//             idx++;
//         }
        
//         return true;
        
        
        
        
        int j=0;
       for(int i=0;i<t.size() && j<s.size();i++)if(s[j]==t[i])j++;   //increment when found in both.
        if(j==s.size())return true;
        else return false;
        
    }
};