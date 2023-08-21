class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
        string tmp="";
        for(int i=0;i<n/2;i++){
            tmp+=s[i];
            if(tmp+s==s+tmp) return true;
        }
        return false;
    }
};