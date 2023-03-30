class Solution {
public:
   unordered_map<string,bool>mp;
    bool f(string s1,string s2){
        int n=s1.length();
        if(s1.size()==1) return s1==s2;
        if(s1==s2) return true;
        string k=s1+s2;
        if(mp.find(k)!=mp.end()) return mp[k];
        for(int i=1;i<n;i++){
            if((f(s1.substr(0,i),s2.substr(0,i)) && f(s1.substr(i),s2.substr(i))) or (f(s1.substr(0,i),s2.substr(n-i)) && f(s1.substr(i),s2.substr(0,n-i))))
            return mp[k]=true;
        }
        return mp[k]=false;
    }
    bool isScramble(string s1, string s2) {
        return f(s1,s2);
    }
};