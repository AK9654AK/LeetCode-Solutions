class Solution {
public:
    int minSteps(string s, string t) {
        int hashs[26]={0};
        int hasht[26]={0};
        for(auto x:s)hashs[x-'a']++;
        for(auto x:t)hasht[x-'a']++;
        
        int c=0;
        for(int i=0;i<26;i++){
            int count=hashs[i]-hasht[i];
            if(count<=0)count=0;
            c+=count;
        }
        
        return c;
    }
};