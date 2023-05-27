class Solution {
public:
    string reverseWords(string s){
         while(s.size()>0 and s[0]==' ')         
            s.erase(s.begin(),s.begin()+1);   // To remove whitespaces from beginning.
			 
        while(s.size()>0 and s[s.size()-1]==' ')
            s.erase(s.end()-1,s.end());       // To remove spaces from end.
			
        for(int i=0;i<s.size()-1;){             // To remove extra space inbetween words.
            if(s[i]==' ' and s[i+1]==' '){
                s.erase(s.begin()+i);
                continue;
            }
            i++;
        }
       
 //Main code to reverse the string 
        reverse(s.begin(),s.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            while(s[i]!=' ' and i<s.size())i++;
            reverse(s.begin()+j,s.begin()+i);
            j=i+1;
        }
        return s;
    }
};