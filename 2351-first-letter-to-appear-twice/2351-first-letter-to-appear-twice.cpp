class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mp;
        for(auto x:s){
            
            if(mp.find(x)==mp.end())mp[x]++;
            else{
                for(auto [key,value]:mp){
                    if(key==x and value==1)return x;
                }
            }
        }
        return 'a';
    }
};