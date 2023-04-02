class Solution {
public:
    string largestGoodInteger(string num) {
      
        vector<string>vec;
     string temp="";
        int strsize=3;
        
           for(int i=num.size();i>=2;i--){
               temp="";
               int strsize=3;
         if(num[i]==num[i-1] && num[i]==num[i-2]){
             while(strsize--)
                 temp+=num[i];
             vec.push_back(temp);
         }
               
       }
        
        
        sort(vec.begin(),vec.end());
        if(vec.size()==0)return "";
      else return vec[vec.size()-1];
    }
};