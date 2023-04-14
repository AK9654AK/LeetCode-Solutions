class Solution {
public:
    
    bool isvow(char c){
        if(c=='a' ||c=='e' ||c=='i'||c=='o'||c=='u' ||c=='A' ||c=='E' ||c=='I'||c=='O'||c=='U')return true;
        else return false;
    }
    string reverseVowels(string s) {
        
        
        int i=0;int j=s.size()-1;
        
        while(i<j){
            if(!isvow(s[i]))i++;
            else if(!isvow(s[j]))j--;
            else if(isvow(s[i]) and isvow(s[j])){swap(s[i],s[j]);i++;j--;}
        }
        
        return s;
    }
};