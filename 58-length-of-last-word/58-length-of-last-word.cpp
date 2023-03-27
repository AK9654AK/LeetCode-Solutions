class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int count=0;
        int j=s.size()-1;
        
        while(s[j]==32){
            j--;
        }
        
        
        for(int i=j;i>=0;i--){
            if(s[i]==32){
                break;
            }
            else count++;
        }
        
        
        
       return count;
        
        
    }
};