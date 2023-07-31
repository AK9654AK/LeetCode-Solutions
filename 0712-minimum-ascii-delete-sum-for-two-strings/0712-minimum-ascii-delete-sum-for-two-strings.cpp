class Solution {
public:
     unordered_map<string,int> mp2;
      int calc(string s1){
          int cnt1=0;
          for(auto x:s1)cnt1+=x;
          return mp2[s1]=cnt1;

      }
      map<pair<int,int>,string> mp;
     string lcs(int ind1,int ind2,string &s1,string &s2){
         if(ind1>=s1.size())return "";
         if(ind2>s2.size())return "";
         if(mp.find({ind1,ind2})!=mp.end())return mp[{ind1,ind2}];
          if(s1[ind1]==s2[ind2]){
              string res="";
              res+=s1[ind1];
               res+= lcs(ind1+1,ind2+1,s1,s2);
               return mp[{ind1,ind2}]=res;
          }

          string res="";
          string res1= lcs(ind1+1,ind2,s1,s2);
          string res2= lcs(ind1,ind2+1,s1,s2);
          int val1,val2;
          if(mp2.find({res1})!=mp2.end()){
              val1=mp2[res1];
          }else{
              val1= calc(res1);
          }
          if(mp2.find({res2})!=mp2.end()){
              val2=mp2[res2];
          }else{
              val2= calc(res2);
          }

          if(val1>val2){
              return mp[{ind1,ind2}]=res1;
          }else{
              return mp[{ind1,ind2}]=res2;
          }
     }
    int minimumDeleteSum(string s1, string s2) {
        string res= lcs(0,0,s1,s2);
        // cout<<res<<endl;
        int val1= calc(s1);
        int val2= calc(s2);
        int val= calc(res);
        return val1-val+val2-val;
        
    }
};