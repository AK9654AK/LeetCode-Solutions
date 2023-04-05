class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        
        int ans=INT_MAX;
        int size=words.size();
        
        for(int i=0;i<words.size();i++){
            
            if(words[i]==target){
                
                ans=min(ans,min(abs(startIndex-i),abs(size-abs(startIndex-i)))); 
                
            }
        }
        
       if(ans==INT_MAX)return -1; 
        
        else return ans;
        
        
        
        
        
        
    }
};