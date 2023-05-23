class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size() , n= mat[0].size();
        vector<vector<int>>ans(m , vector<int>(n,0));
        vector<vector<int>>visited(m ,vector<int>(n, 0));
        queue<pair<pair<int,int> , int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    q.push({{i,j} , 0});
                    visited[i][j]=1;
                }
            }
        }
        vector<int>drow={-1 ,0 , 1 ,0 };
        vector<int>dcol={0 , 1 ,0 , -1};
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int dis = q.front().second;
            ans[row][col]=dis;
            q.pop();
            for(int d=0;d<4;d++){
                int i = row + drow[d];
                int j = col + dcol[d];

                if(i>=0 and j>=0 and i<m and j<n and !visited[i][j]){
                    q.push({{i,j} , dis+1});
                    visited[i][j]=1;
                }
            }
        }
        return ans;
    }

};