class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>hash(26,0);
        
        for(auto i:sentence)hash[i-'a']++;
        for(auto i:hash)if(i<1)return false;
        return true;
    }
};