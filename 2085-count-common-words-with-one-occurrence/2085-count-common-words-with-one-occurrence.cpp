class Solution {
public:
    int count=0;
    int countWords(vector<string>& words1, vector<string>& words2) {
        // sort(word1.begin(),word1.begin());
        // sort(word2.begin(),word2.end());
        
        
        unordered_map<string,int>f1,f2;
        for(auto x:words1)f1[x]++;
        for(auto x:words2)f2[x]++;
        for(auto [key,value]:f1){
            if(f2[key]==1 and value==1)count++;
        }
        
        
        
        return count;
    }
};