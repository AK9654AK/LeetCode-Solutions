class Solution {
public:
    int sizec(string t){
        long long int count=0;
           for(auto c:t)count++;
           return count;
    }
    
    int minExtraChar(string s, vector<string>& dictionary) {
        int size=sizec(s); 
        int n=s.size();
        long int number=0;
        vector<int>dp(n+1,0);
        for (int i=1;i<=size;i++){
            dp[i]=dp[i-1]+1;  
            int ans=0;
            int count=sizec(s);
            for (const string &word:dictionary){
                number++;
                if(i>=word.length()){
                    if(s.substr(i-word.size(),word.size())==word){
                    int j=i- word.size();
                    number++;
                        int count2=sizec(s);
                    dp[i]=min(dp[i],dp[j]);  
                }
                }
                if(number==-1 and ans==0)return 0;
            }
        }

        return dp[n];
    }
    
};