class Solution {
public:
     vector<vector<int>> groupThePeople(vector<int>& g) {
        int n=g.size();
        unordered_map<int,queue<int>> u;
        for(int i=0;i<n;i++)
        u[g[i]].push(i);
         vector<vector<int>> v;
        for(auto x:u)
        {
            queue<int> q=x.second;
            if(q.size()%x.first)
            return {{}};
            else
            {
                while(!q.empty())
                {
                    vector<int> vv;
                    for(int i=0;i<x.first;i++)
                    {
                        int xxx=q.front();
                       vv.push_back(xxx);
                       q.pop();
                    }
                    v.push_back(vv);
                }
            }
        }
        return v;
    }
};