class Solution {
public:
    int countBits(long long x){
        int count=0;
        for(int i=0;i<64;i++){
            if(x&(1LL<<i)) count++;
        }
        return count;
    }
    long long findMin(int i,int skills,int allSkills,vector<int>&peo,vector<vector<long long>>&dp){
        // cout<<i<<endl;
         if(i==peo.size()){
             if(skills!=allSkills) {
                return (1LL<<i)-1LL;
             }
             return 0LL;
         }
         if(dp[i][skills]!=-1) return dp[i][skills];
         int temp=skills;
         long long notPick=findMin(i+1,skills,allSkills,peo,dp);
         temp|=peo[i];
         if(temp==skills) return notPick;
         long long pick=findMin(i+1,temp,allSkills,peo,dp);
        
         pick|=(1LL<<i);
        int x=countBits(pick);
        int y=countBits(notPick);
        if(x<y) return dp[i][skills]=pick;
        return dp[i][skills]=notPick;
         
         
    }
    vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) {
        map<string,int>m;
        int n=req_skills.size();
        for(int i=0;i<n;i++){
            m[req_skills[i]]=i;
        }
        vector<int>peo(people.size(),0);
        for(int i=0;i<peo.size();i++){
            for(auto str:people[i]){
                peo[i]|=(1<<m[str]);
            }
        }
        // cout<<"peo is created"<<endl;
        int allSkills=(1<<n)-1;
        // cout<<allSkills<<endl;
             vector<vector<long long>>dp(peo.size(),vector<long long>(allSkills+1,-1));
        long long ans= findMin(0,0,allSkills,peo,dp);
        vector<int>res;
        for(int i=0;i<64;i++){
            if(ans&(1LL<<i)) res.push_back(i);
        }
   
        return res;
    }
};