class Solution {
public:
    bool digitCount(string num) {
     
        // int hash[11]={0};
        unordered_map<int,int>hash;
        for(int i=0;i<num.size();i++)hash[num[i]-'0']++;
        // int j=1;
        
        
        for(int i=0;i<num.size();i++){
            int checknum=i;
            int freq=num[i]-'0';
            
            if(hash[i]!=freq)return false;
        }
        
        return true;
    }
};