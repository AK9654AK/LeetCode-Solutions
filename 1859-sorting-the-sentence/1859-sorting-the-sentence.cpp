class Solution {
public:
    string sortSentence(string s) {
        
 
             
        int n=s.size();
        vector<string> str(10);
        string word;
        
        for(int i=0;i<n;i++){
            
            if(s[i]>=48 &&s[i]<=57){
                
                
                str[s[i]-48]=word+" ";
                word="";
                i++;                          
                
            }
            else word+=s[i];
            
            
        }             //https://www.youtube.com/watch?v=Pa93NiDZFNQ
        
        
        string answer="";
       for(string x:str){
           
           answer+=x;
       }
        
        
        answer.pop_back();
        
        
        return answer;
        
        
    }
};