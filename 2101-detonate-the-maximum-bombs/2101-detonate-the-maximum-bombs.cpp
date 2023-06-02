class Solution {
public:
    int dfs(vector<vector<int>>& bombs,int n,vector<bool>& detonated)
    {
        int ans=1;
        //cout<<"dfs call for "<<n<<endl;
        detonated[n]=true;
        long long x=bombs[n][0];
        long long y=bombs[n][1];
        long long r=bombs[n][2];
        for(int j=0;j<bombs.size();++j)
        {
            if(!detonated[j])
            {
                long long a=bombs[j][0];
                long long b=bombs[j][1];

                if(sqrt(((x-a)*(x-a)) + ((y-b)*(y-b)))<=r)
                {
                    ans+=dfs(bombs,j,detonated);
                }
            }
        }
        //detonated[n]=false;
        //cout<<"dfs completed for "<<n<<" returning "<<ans<<endl;
        return ans;
    }
public:
    int maximumDetonation(vector<vector<int>>& bombs) {
        int mx=0;
        vector<bool> detonated(bombs.size(),false);

        
        for(int i=0;i<bombs.size();++i)
        {
            mx=max(mx,dfs(bombs,i,detonated));
            fill(detonated.begin(),detonated.end(),false);
        }

        return mx;
    }
};