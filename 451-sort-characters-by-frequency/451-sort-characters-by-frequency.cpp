class Solution {
public:
   static bool compara(pair<char,int>A,pair<char,int>B){return A.second>B.second;}
    string frequencySort(string s){
        unordered_map<char,int>mp;
        for(auto x:s)mp[x]++;
        vector<pair<char,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),compara);
        s.clear();
        for(auto [key,val]:v)for(int i=0;i<val;i++)s.push_back(key);
     return s; 
    }
};