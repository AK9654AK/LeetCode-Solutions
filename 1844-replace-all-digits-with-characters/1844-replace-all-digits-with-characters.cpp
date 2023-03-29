class Solution {
public:
    string replaceDigits(string s) {

        
        // char arr[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

        for(int i=0,j=1;j<s.size();i+=2,j+=2){
           s[j] = s[i]-'0'+s[j];
            
        }
       return s;
    }
};