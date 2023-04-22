class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int hash[26]={0};
        for(auto x:t)hash[x-'a']++;
        for(auto x:s)hash[x-'a']--;
        
        char ans;
        for(int i=0;i<26;i++){
            if(hash[i]!=0)ans=i+'a';
        }
        
        return ans;
    }
};