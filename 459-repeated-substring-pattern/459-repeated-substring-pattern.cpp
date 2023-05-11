class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string check=s+s;
        check=check.substr(1,check.size()-2);
        return check.find(s)!=string::npos;
        
    }
};