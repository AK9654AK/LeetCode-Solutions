class Solution {
public:
            vector<string>ans; 
    vector<string> uncommonFromSentences(string s1, string s2) {
      unordered_map<string,int>mp;
        int j=0;
        for(int i=0;i<=s1.size();i++){
            if(s1[i]==' ' || i==s1.size()){
                string temp=s1.substr(j,i-j);
                mp[temp]++;
                j=i+1;
                temp.clear();
        }
        }
        j=0;
              for(int i=0;i<=s2.size();i++){
            if(s2[i]==' ' || i==s2.size()){
                string temp=s2.substr(j,i-j);
                mp[temp]++;
                j=i+1;
                temp.clear();
        }

        }

        for(auto [key,value]:mp){
            if(value==1)ans.push_back(key);
        }
        return ans;
    }
};