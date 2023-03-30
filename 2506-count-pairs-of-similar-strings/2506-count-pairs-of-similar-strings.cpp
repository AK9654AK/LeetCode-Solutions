class Solution {
public:
    int similarPairs(vector<string>& words) {

        int n=words.size();
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            string str=words[i];
            int hash1[26]={0};
            for(int m=0;m<str.size();m++){
               hash1[str[m]-'a']++;
            }
            int hash2[26]={0};
            
            for(int j=i+1;j<n;j++){
                int hash2[26]={0};
                string str2=words[j];
                for(int k=0;k<str2.size();k++){
                    hash2[str2[k]-'a']++;
                }
                
                bool check=true;
                for(int z=0;z<26;z++){
                    if((hash1[z]!=0 && hash2[z]==0)||hash1[z]==0&& hash2[z]!=0)check=false;
                }
                
                if(check)count++;
            }
            
            
            
        }        
        
        return count;
    }
};