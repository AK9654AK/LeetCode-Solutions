class Solution {
public:
    string convert(string s, int numRows) {
         int n=numRows;
       if(n<=1)return s;
        vector<string>str(n,"");
        int row=0;int step=1;
        for(int i=0;i<s.size();i++){
            str[row]+=s[i];
            if(row==0)step=1;
            if(row==n-1)step=-1;
            row+=step;
        }
        string abhi;
        for(int i=0;i<str.size();i++) abhi+=str[i];
        return abhi;
    }
};