class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust){
      
        
        vector<int> hash(n+1);
        
        // if(trust.size()==1)return trust[0][1];
        // if(n==1)return 1;
        // if(n>1 && trust.size()<=1)return -1;
        // int count=0;
        
        // int answer=1;
        // count=trust[0][1];
        for(int i=0;i<trust.size();i++){
              
            hash[trust[i][0]]=-1;
                // if(trust[i][1]==count)count++;
               hash[trust[i][1]]++;
                 // if(trust[i][1]!=count)return -1;
            }
        
        for(int i=1;i<=n;i++){
            
            
            if(hash[i]==n-1)return i;
            
            
            
//             if(n!=1&& hash[i]==1)return -1;
            
            
//             if(hash[i]>hash[j]){
//                 j=i;
            }
            
        
        
        
        return -1;
     
    } 
};