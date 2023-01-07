class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int ans=INT_MIN;
        
        int n=sentences.size();
        
        for(int i=0;i<n;i++){
            
            int count=1; 
            int size=sentences[i].size();
            for(int j=0;j<size;j++){
            if(sentences[i][j]==' ')count++;
            }
            
            
            
            ans=max(count,ans);
            
            
            
        }
        return ans;
        
    }
};