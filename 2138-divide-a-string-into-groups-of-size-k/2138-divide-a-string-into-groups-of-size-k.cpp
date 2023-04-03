class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        
        int n=s.size();
        int rem=s.size()%k;
        
        string temp=""; 
        vector<string>vec;
    
        for(int i=0;i<n;i++){
              temp+=s[i];
            if(temp.size()==k){
                vec.push_back(temp);
                temp="";
            }
        }
            if(rem>0){
                for(int i=0;i<k-rem;i++){
                    temp+=fill;
                }
                vec.push_back(temp);
            }
               
            
        
        return vec;
    }
};