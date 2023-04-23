class Solution {
public:
    
    bool consis(string all, string word){
        int hash[26]={0};
        for(auto i:word)hash[i-'a']=1;
        for(auto i: all)hash[i-'a']=0;
        for(auto x:hash)if(x==1)return false;
        return true;   
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        for(auto i:words){
            if(consis(allowed,i)==true)count++;  
        }
        return count;
    }
};