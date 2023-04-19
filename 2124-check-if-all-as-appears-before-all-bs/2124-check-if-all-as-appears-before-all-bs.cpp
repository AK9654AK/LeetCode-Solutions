class Solution {
public:
    bool checkString(string s) {
      
        int i=0;
        
        while(i<s.size()){
            if(s[i]=='b'){
                break;
            }
            i++;
        }
        int j=i+1;
        while(j<s.size()){
            if(s[j]=='a')return false;
            j++;
        }
        
        return true;
        
        
        
//     string temp="";
        
//          strcpy(temp,s);
        
//         sort(temp.begin(),temp.end());
        
        
        
//         for(int i=0;i<temp.size();i++){
//             if(temp[i]!=s[i])return false;
//         }
        
        
//         return true;
    }
};