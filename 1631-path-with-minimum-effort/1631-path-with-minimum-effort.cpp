class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        // Initialised the Min Heap {diffval,{row,col}}
        priority_queue<pair<int,pair<int,int>>,
        vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>>pq;
        pq.push({0,{0,0}}); // Taken the {0,0} index to begin the bfs
        vector<vector<bool>>vis(n,vector<bool>(m,0));//Visited Matrix
        int ans = INT_MIN;//This variable will store the answer
        while(!pq.empty()){
            auto it = pq.top();
            int row = it.second.first;
            int col = it.second.second;
            int wt = it.first;
            ans = max(ans,wt);
            pq.pop();
            vis[row][col]=1;
// delRow and delCol is created to find the adjacent elements
//{Left,Right,Below,Above}
            int delRow[]={-1,0,+1,0};
            int delCol[]={0,-1,0,+1};
    if(row==n-1 && col == m-1)return ans;//We have reached the destnation now return the answer.
            for(int i=0;i<4;i++){
                int nrow = row + delRow[i];
                int ncol = col + delCol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol]){
                    pq.push({abs(heights[nrow][ncol]-heights[row][col]),{nrow,ncol}});
                }
            }
        }
        return ans;
    }
};