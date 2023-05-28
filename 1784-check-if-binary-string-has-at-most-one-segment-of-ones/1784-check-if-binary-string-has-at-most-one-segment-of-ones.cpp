class Solution {
public:
    bool checkOnesSegment(string s) {
         int i=0;
        while(s[i]=='0')i++;
        int j=s.size()-1;
        while(s[j]=='0')j--;
        for(int i=0;i<j;i++)if(s[i]=='0')return false;
        return true;
    }
};