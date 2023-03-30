class Solution {
public:
    int maxPower(string s) {
        if(s.size()==1)return 1;
        int abhi=1;int count=1;
        bool flag=false;
        for(int i=1;i<=s.size();i++){
            if(s[i-1]==s[i]){
               count+=1;
            abhi=max(count,abhi);
            }else count=1;
        }
        return abhi;
    }
};