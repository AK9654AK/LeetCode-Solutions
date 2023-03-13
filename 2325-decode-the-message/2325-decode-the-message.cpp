class Solution {
public:
    string decodeMessage(string key, string message) {
  
         int hash[26];
        int j=0;
        int size=26;
        while(size--){                     ///intialized it with -1;
            hash[j++]=-1;
        }
        
        
        int k=0;
        for(int i=0;i<key.size();i++) {
            if (key[i]!=' '&& hash[key[i]-'a']==-1) {
                hash[key[i]-'a']=k;  ////At every element of main string is mapped on the hash table along with its occuring number that is k;
                
                k++;
            }
        }
        
        for (int i=0;i<message.size(); i++) {   //getting that back from again hash table
            if (message[i]!=' ') {
                message[i]='a'+hash[message[i]-'a'];
            }
        }  
        return message;
    }
    
};