class Solution {
public:
    
        
    bool canConstruct(string ransomNote, string magazine) {
    vector<int> hashmap(26,0);

    for(int i=0;i<ransomNote.size();i++){
        hashmap[ransomNote[i]-'a']--;
    }

    for(int i=0;i<magazine.size();i++){
        hashmap[magazine[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(hashmap[i]<0) return false;
    }
    return true;


        
        
    }
};