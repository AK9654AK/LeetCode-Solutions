class Solution {
public:
    int partitionString(string s) {
        
       vector <int> hash(26,0);
        int res=1;
        
        for (int i=0;i<s.size();i++){
            if (hash[s[i]-'a']!=0){
                res++;
                fill(hash.begin(),hash.end(),0);
            }
            hash[s[i]-'a']++;
        }
        return res;
    }
};