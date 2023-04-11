class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        
        int count=0;
        for(int i=0;i<words.size();i++){
            string temp=words[i];
            
            if(s.find(temp)==0)count++;
        }
        
        return count;
        
    }
};