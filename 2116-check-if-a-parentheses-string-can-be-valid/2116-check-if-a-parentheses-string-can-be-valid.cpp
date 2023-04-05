class Solution {
public:
    bool canBeValid(string s, string locked) {
        
        int size=s.size();
        if(size%2==1)return false;
        int diff=0;
        
        for(int i=0;i<size;i++){
            if(s[i]=='(' ||locked[i]=='0')diff++;  //or if unlocked as we can changed
            else diff--;
            
            if(diff<0)return false;  //at any pt it becomes unbalance we return.
        }
        
        diff=0;
        
        for(int i=size-1;i>=0;i--){
            if(s[i]==')' || locked[i]=='0')diff++;
            else diff--;
            
            if(diff<0)return false;
        }
        
        
         return true;
    }
};