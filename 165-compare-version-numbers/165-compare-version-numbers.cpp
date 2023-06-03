class Solution {
public:
int compareVersion(string version1, string version2) {
        vector<int>v1,v2;
        
        int j=0;
        for(int i=0;i<version1.length();i++)
    {
        string s;
        while(version1[i]!='.'&&i<version1.length())
        {
            s+=version1[i];
            i++;
        }
        int z=stoi(s);
        v1.push_back(z);
     
    }
    for(int i=0;i<version2.length();i++)
    {
        string s;
        while(version2[i]!='.'&&i<version2.length()){
            s+=version2[i];
            i++;
        }
        
        int z=stoi(s);
        v2.push_back(z);
    }
        int n;
       v1.size()>v2.size()?v2.resize(v1.size()):v1.resize(v2.size());
        
        // v1.resize(n);v2.resize(n);
        int res=0;
       for(int index=0;index<v1.size();index++){
            if(v1[index]<v2[index])return -1;
            else if(v1[index]>v2[index])return 1;
        }
        return 0;  
    } 
};