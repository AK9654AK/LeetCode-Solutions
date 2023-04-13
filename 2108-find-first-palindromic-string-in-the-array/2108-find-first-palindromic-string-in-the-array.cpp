class Solution {
public:
    
    
    bool ispali(string s){
        
        int i=0; int j=s.size()-1;
        
        while(i<=j){
            if(s[i]!=s[j])return false;
            i++;j--;
        }
        
        return true;
    }
    
    
    
    string firstPalindrome(vector<string>& words) {
        
        string temp="";
        
        
        for(auto i:words){
            if(ispali(i)){
                temp=i;
                break;
            
            }
        }
        
        
        return temp;
        
        
        
        
        
        
    }
};