class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
    string res="";
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string a=strs[0];
        string b=strs[n-1];
        
        for(int i=0;i<strs[0].size();i++){
            if(a[i]==b[i])
                res+=a[i];
            else
                break;
        }
        return res;
    }
//         sort(strs.begin(),strs.end());
//         string ans=strs[0];
//         string res;
//         for(int i=1;i<=strs.size();i++){
            
//             for(int j=0;j<strs[i].size();j++){
//                 if(ans[i]!=strs[i][j])break;
//                 else res+=strs[i][j];
//             }
            
//         }
//         return res;
        
    
};