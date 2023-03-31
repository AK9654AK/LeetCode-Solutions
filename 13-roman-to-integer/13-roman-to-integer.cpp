class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        
        unordered_map<char,int>hash;
        hash['I']=1;
         hash['V']=5;
         hash['X']=10;
         hash['L']=50;
         hash['C']=100;
         hash['D']=500;
         hash['M']=1000;
        for(int i=0;i<s.size();i++){
            if(hash[s[i]]<hash[s[i+1]]){
                ans-=hash[s[i]];
            }else{
                ans+=hash[s[i]];
            }
        }
        return ans;
    }
};