class Solution {
public:
    bool areNumbersAscending(string s){
        
        int temp=0;
//       if(s[0]>=48 and s[0]<=57)temp=int(s[0]);
vector<int> vec;
        
        int n=0;
        for(int i=0; i<s.length(); i++){
            if(isdigit(s[i])){
                n=0;
               if(isdigit(s[i])){
                while(isdigit(s[i])){
                    n=n*10+(s[i]-'0');
                    i++;
                }
               }
                vec.push_back(n);

            }
        }
        
        
        for(int i=0;i<vec.size()-1;i++){
            if(vec[i]>=vec[i+1])return false;
            
        }
        return true;
    
    }
};